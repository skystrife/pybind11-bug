#include <pybind11/functional.h>

namespace py = pybind11;

class dog
{
};

PYBIND11_MODULE(example, m) {
    m.doc() = "Example for pybind11/flask bug";

    auto submod = m.def_submodule("submod");

    py::class_<dog>(submod, "Dog");

    m.def("fun", [](std::function<bool(int)> fn) { return fn(5); },
          py::arg("fn") = std::function<bool(int)>([](int) { return true; }));
}
