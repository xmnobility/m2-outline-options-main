Search:

} TConfig;

Inside (before) add:

#ifdef ENABLE_OUTLINE_OPTIONS
			bool			bShowOutline;
#endif

Should look like this:

#ifdef ENABLE_OUTLINE_OPTIONS
			bool			bShowOutline;
#endif
} TConfig;


Search:

		void							SetShowSalesTextFlag(int iFlag);


Add under:
#ifdef ENABLE_OUTLINE_OPTIONS
		bool							IsShowOutline() {return m_Config.bShowOutline;}
		void							SetShowOutlineFlag(bool bShow) { m_Config.bShowOutline = bShow; }
#endif