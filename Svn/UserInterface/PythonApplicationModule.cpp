Search :
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 0);
#endif

Add under :
#ifdef ENABLE_OUTLINE_OPTIONS
	PyModule_AddIntConstant(poModule, "ENABLE_OUTLINE_OPTIONS", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_OUTLINE_OPTIONS", 0);
#endif