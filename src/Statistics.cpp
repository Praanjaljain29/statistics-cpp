#include "Statistics.hpp"

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