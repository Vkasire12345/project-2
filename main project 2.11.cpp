#include <iostream>
#include "math_functions.h"
#include "data_structure.h"

int main() {
    MathFunctions math;
    DataStructure data;

    data.addElement(10);
    data.addElement(20);

    std::cout << "Addition of elements: " << math.add(data.getElementAt(0), data.getElementAt(1)) << std::endl;
    std::cout << "Multiplication of elements: " << math.multiply(data.getElementAt(0), data.getElementAt(1)) << std::endl;
    return 0;
}
