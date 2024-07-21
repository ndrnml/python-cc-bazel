# # Adapted from: https://github.com/bazelbuild/bazel/issues/1475
# cc_binary(
#   name = "module_pybind.so",
#   srcs = ["module_pybind.cc"],
#   copts = ["-I/usr/include/python3.12/"],
#   linkshared = 1,
#   linkstatic = 1,
#   deps = [
#     "@pybind11//:pybind11",
#     # "//native:py_module",
#     # "//src:module",
#   ],
#   visibility = ["//visibility:public"],
# )
#
# py_library(
#   name = "binding",
#   data=[":binding.so"],
#   imports=['.'],
#   visibility = ["//visibility:public"],
# )

load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
# load("@rules_python//python:defs.bzl", "py_library")
#load("@rules_python//python/cc:current_py_cc_headers.bzl", "py_library")

py_library(
    name = "hugo_lib",
    data = [":hugo"],
    imports = ["."],
)

pybind_extension(
    name = "hugo",
    srcs = ["cpp_project.cc",],
    # deps = [],
    visibility = ["//visibility:public"],
)

