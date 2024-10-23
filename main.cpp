//#include <iostream>
//#include <vector>
//#include <numpy/arrayobject.h>
//#include <Python.h>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    plt::plot({1, 2, 3, 4});
    plt::save("plot.png"); 
    plt::show();
    return 0;
}
