#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>

#include "pybind/vision/camera/camera.h"

namespace py = pybind11;

void init_submodule(py::module& m); 
