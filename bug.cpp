#include <pybind11/functional.h>

namespace py = pybind11;

class dog
{
};

PYBIND11_MODULE(example, m) {
    m.doc() = "Example for pybind11/flask bug";

    py::class_<dog>(m, "Dog");

    m.def("fun", [](std::function<bool(int)> fn) { return fn(5); });
}
