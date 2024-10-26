Add:
#include "PythonSystem.h"

Search: void CPythonTextTail::ShowCharacterTextTail(DWORD VirtualID)

After 
	if (pInstance->IsGuildWall())
		return;
	
Add:

#ifdef ENABLE_OUTLINE_OPTIONS
	static auto& system = CPythonSystem::Instance();
	const auto isShowOutline = system.IsShowOutline();

	auto setOutline = [](CGraphicTextInstance* instance, bool showOutline) 
	{
		if (instance) instance->SetOutline(showOutline);
	};

	setOutline(pTextTail->pTextInstance, isShowOutline);
	setOutline(pTextTail->pLevelTextInstance, isShowOutline);
	setOutline(pTextTail->pTitleTextInstance, isShowOutline);
	setOutline(pTextTail->pGuildNameTextInstance, isShowOutline);
#endif

Search: void CPythonTextTail::ShowItemTextTail(DWORD VirtualID)

Before: 
	m_ItemTextTailList.push_back(pTextTail);

Add:
#ifdef ENABLE_OUTLINE_OPTIONS
	if (auto pTextInstance = pTextTail->pTextInstance) 
	{
		auto& system = CPythonSystem::Instance();
		pTextInstance->SetOutline(system.IsShowOutline() ? true : false);
	}
#endif