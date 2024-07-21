# py_library(
#     name = "test_cpp_module",
#     srcs = ["test_cpp_module.py"],
#     # data = ["//pybind:astri3d_pybind.so"],
#     visibility = ["//visibility:public"],
# )

load("@rules_python//python:defs.bzl", "py_library")
load("@rules_python//python/cc:current_py_cc_headers", "py_library")

py_binary(
    name = "main",
    srcs = ["main.py"],
    visibility = ["//visibility:public"],
)

py_test(
    name = "test_cpp_module",
    srcs = ["test_cpp_module.py"],
    # data = ["//pybind:astri3d_pybind.so"],
    # deps = [":basic_lib"],
    visibility = ["//visibility:public"],
)
