#include <iostream>
#include <vector>

#include "Statistics.hpp"

int main() {
    std::vector<double> data = {1,2,3,4,5};
    std::vector<double> odd = {5, 1, 3, 9, 7};
    std::vector<double> even = {8, 2, 6, 4};


    std::cout << "Mean = "
              << Statistics::mean(data)
              << std::endl;
    std::cout << "Median ="
              << Statistics::median(odd)
              << Statistics::median(even)
              << std::endl;
    return 0;
}