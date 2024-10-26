Search
	m_Config.bShowSalesText		= true;

Add under:
#ifdef ENABLE_OUTLINE_OPTIONS
	m_Config.bShowOutline = true;
#endif

Search:
		else if (!stricmp(command, "ALWAYS_VIEW_NAME"))
			m_Config.bAlwaysShowName = atoi(value) == 1 ? true : false;

Add under:
#ifdef ENABLE_OUTLINE_OPTIONS
		else if (!stricmp(command, "SHADOW_TEXT"))
			m_Config.bShowOutline = atoi(value) == 1 ? true : false;
#endif

Search:
	fprintf(fp, "SOFTWARE_TILING		%d\n", m_Config.bSoftwareTiling);

Add under:
#ifdef ENABLE_OUTLINE_OPTIONS
	fprintf(fp, "SHADOW_TEXT				%d\n", m_Config.bShowOutline);
#endif