#pragma once
#include <vector>

class DataStructure {
public:
    void addElement(int element);
    int getElementAt(size_t index) const;
    size_t size() const;

private:
    std::vector<int> data;
};
