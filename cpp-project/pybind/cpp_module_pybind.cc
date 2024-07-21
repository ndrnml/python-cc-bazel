#include <pybind11/pybind11.h>

#include "example/cpp_module.h"

namespace py = pybind11;

void init_submodule(py::module& m) {
    py::class_<example::CppModule>(m, "CppModule")
        .def(py::init<>())
        .def("Run", &PyModule::Run);
}


  /*py::enum_<MaskType>(m, "MaskType")*/
  /*    .value("SemanticMask", MaskType::SEMANTIC_MASK)*/
  /*    .value("ObjectMask", MaskType::OBJECT_MASK)*/
  /*    .value("StereoMask", MaskType::STEREO_MASK)*/
  /*    .export_values();*/
  /**/

