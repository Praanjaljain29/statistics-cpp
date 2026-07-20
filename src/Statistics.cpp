#include "Statistics.hpp"
#include <algorithm>
#include <stdexcept>

double Statistics::mean(const std::vector<double>& data) {
    if(data.empty()) {
        throw std::invalid_argument(
            "Cannot calculate mean of an empty dataset."
        );
    }
    
    double sum = 0.0;

    for (size_t i = 0; i < data.size(); i++) {
        sum += data[i];
    }
    
    return sum / data.size();
}
double Statistics::median(const std::vector<double>& data) {
    if(data.empty()) {
        throw std::invalid_argument(
            "Cannot calculate median of an empty dataset."
        );
    }
    //sorted copied data
    std::vector<double> sorteddatacopy = data;
    std::sort(sorteddatacopy.begin(),sorteddatacopy.end());
    if(data.size() % 2) {
        return sorteddatacopy[data.size() / 2];
    }
    return ((sorteddatacopy[data.size()/2]) + (sorteddatacopy[(data.size()/2) - 1 ])) /2.0;
}