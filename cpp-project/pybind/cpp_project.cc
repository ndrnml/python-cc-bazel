#include <pybind11/pybind11.h>

/*#include "module_pybind.h"*/


// This is the main entry point for the C++ module that we make accessible in Python.
// Depending on the complexity of the project and the interface that one wants to expose
// this file can be split up into multiple files, e.g. for every namespace or even for every
// single class or not at all and all the pybind11 glue code can be added in this single file.
PYBIND11_MODULE(, m) {
    m.doc() = "pybind11 example module binding for 'existing-cpp-project'";

    // Here, I demonstrate how to add the namespace `example` as a separate submodule.
    // This will be treated as such in Python import: from ecp.example import ...
    /*py::module example = m.def_submodule("example", "")*/

}
/*    py::class_<PyModule>(m, "PyModule")*/
/*        .def(py::init<>())*/
/*        .def(py::init<Module::Options>())*/
/*        .def("Run", &PyModule::Run);*/
/**/
/*    py::class_<Module::Options>(m, "Options")*/
/*        .def(py::init<>())*/
/*        .def_readwrite("option1", &Module::Options::option1)*/
/*        .def_readwrite("option2", &Module::Options::option2)*/
/*        .def_readwrite("option3", &Module::Options::option3);*/
/*}*/
/**/
