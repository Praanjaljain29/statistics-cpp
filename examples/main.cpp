#include <iostream>
#include <vector>

#include "Statistics.hpp"

int main() {
    std::vector<double> data = {1,2,3,4,5};

    std::cout << "Mean = "
              << Statistics::mean(data)
              << std::endl;

    return 0;
}