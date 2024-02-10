#include "data_structure.h"
#include <stdexcept>

void DataStructure::addElement(int element) {
    data.push_back(element);
}

int DataStructure::getElementAt(size_t index) const {
    if (index >= data.size()) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

size_t DataStructure::size() const {
    return data.size();
}
