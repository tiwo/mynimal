#include <Python.h>
#include <stdio.h>

static PyObject *
say_hello(PyObject * self, PyObject * args) {
	printf("Hello world\n");
	Py_RETURN_NONE;
}

static PyMethodDef
_mynimal_methods[] = {
	{
		"say_hello",
		say_hello,
		METH_NOARGS,
		"just print \"hello world\" from inside the C extension"
	},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef
_mynimal_module = {
	PyModuleDef_HEAD_INIT,
	"_mynimal",
	"an example C extension",
	-1,
	_mynimal_methods
};

PyMODINIT_FUNC
PyInit__mynimal(void) {
	PyObject * mod = PyModule_Create(&_mynimal_module);
	return mod;
};
