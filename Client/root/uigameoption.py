# in def __init__(self): add:
		if app.ENABLE_OUTLINE_OPTIONS:
			self.RefreshShowOutline()
			
#in def __Initialize(self): add:
		if app.ENABLE_OUTLINE_OPTIONS:
			self.ShowOutlineButton = []

#in def __Load_BindObject(self): add:
			if app.ENABLE_OUTLINE_OPTIONS:
				self.ShowOutlineButton.append(GetObject("IsShowOutlineButton"))
				self.ShowOutlineButton.append(GetObject("SetShowOutlineButton"))
				
#in def __Load(self): add:
		if app.ENABLE_OUTLINE_OPTIONS:
			self.ShowOutlineButton[0].SAFE_SetEvent(self.__OnisClickShowOutline)
			self.ShowOutlineButton[1].SAFE_SetEvent(self.__OnsetClickShowOutline)
			
#add at the end
	if app.ENABLE_OUTLINE_OPTIONS:
		def __OnisClickShowOutline(self):
			systemSetting.SetShowOutlineFlag(TRUE)
			self.RefreshShowOutline()
			
		def __OnsetClickShowOutline(self):
			systemSetting.SetShowOutlineFlag(FALSE)
			self.RefreshShowOutline()
				
		def RefreshShowOutline(self):
			if systemSetting.IsShowOutline():
				self.ShowOutlineButton[0].Down()
				self.ShowOutlineButton[1].SetUp()
			else:
				self.ShowOutlineButton[0].SetUp()
				self.ShowOutlineButton[1].Down()