Before: 
void initsystemSetting()

Add:
#ifdef ENABLE_OUTLINE_OPTIONS
PyObject* systemIsShowOutline(PyObject* poSelf, PyObject* poArgs)
{
	static auto& system = CPythonSystem::Instance();
	return Py_BuildValue("b", system.IsShowOutline());
}

PyObject* systemSetShowOutlineFlag(PyObject* poSelf, PyObject* poArgs)
{
	bool isShow;
	PyTuple_GetBoolean(poArgs, 0, &isShow);

	static auto& system = CPythonSystem::Instance();
	system.SetShowOutlineFlag(isShow);
	return Py_BuildNone();
}
#endif

Search
		{ "IsShowSalesText",			systemIsShowSalesText,			METH_VARARGS },

Add under:
#ifdef ENABLE_OUTLINE_OPTIONS
		{"SetShowOutlineFlag",			systemSetShowOutlineFlag,		METH_VARARGS},
		{"IsShowOutline",				systemIsShowOutline,			METH_VARARGS},
#endif