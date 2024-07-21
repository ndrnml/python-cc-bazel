This is a mess. Bazel is introducing MODULE.bazel and somehow everything is not quite working
together.

# C++ and Python Bazel Build Project

### Pre-requisites
* pybind11[global] (if you are in a virtual environment) 
* gcc

## TL;DR
```
git clone <this repo> --depth 1
cd <this repo>
bazel build //something:hugo
```

This reposoitory contains a small dummy project showing how to integrate pybind11 into your
awesome C++ library for Python. It works great for both cases where you already have a C++
project or if you want to start off making use of both languages strength. 

Tested with:
* python [version]
* bazel [version]
* gcc [version]
* pybind11 [version]


This tutorial hopefully helps for somewhat more complicated project structures than the one
shown in the pybind11 bazel reference [https://github.com/pybind/pybind11_bazel].

Pybind11 documentation [https://pybind11.readthedocs.io/en/stable/index.html]

This example shows how one can add pybind to an existing C++ project 
(called existing-cpp-project).

1. Add pybind dependencies to the root WORKSPACE file.
2. Add pybind11.BUILD file (or can this also be loaded via bazel rule by now?)
2. Add glue code pybind11 modules (e.g. pybind/).
3. Add a test in python to see if the compilation worked.

#### Test Bazel Compiles C++ 
```
bazel run //:main
```

### Test Bazel Compiles Python
```
bazel run //python:main
```

### Test Bazel Compiles Pybind11 example


