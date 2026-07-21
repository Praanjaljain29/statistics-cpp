#include "Statistics.hpp"
#include <algorithm>
#include <stdexcept>
#include <cmath>
#include <unordered_map>

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
double Statistics::populationVariance(const std::vector<double>& data) {
    if(data.empty()) {
        throw std::invalid_argument(
            "Cannot calculate variance of an empty dataset."
        );
    }
    double avg = Statistics::mean(data);
    double varianceSum = 0.0;
    for(const auto& value : data) {
        double deviation = value - avg;
        varianceSum += (deviation * deviation);
    }
    return varianceSum / static_cast<double>(data.size());
}
double Statistics::sampleVariance(const std::vector<double>& data) {
    if(data.size()<2) {
        throw std::invalid_argument(
             "Sample variance requires at least two observations."
        );
    }
    double avg = Statistics::mean(data);
    double varianceSum = 0.0;
    for(const auto& value : data) {
        double deviation = value - avg;
        varianceSum += (deviation * deviation);
    }
    return varianceSum / static_cast<double>(data.size()-1);
}
double Statistics::populationStandardDeviation(const std::vector<double>& data) {
    return std::sqrt(Statistics::populationVariance(data));
    
}
double Statistics::sampleStandardDeviation(const std::vector<double>& data) {
    return std::sqrt(Statistics::sampleVariance(data));
}
std::vector<double> Statistics::mode(const std::vector<double>& data) {
    if(data.empty()) {
        throw std::invalid_argument (
            "Cannot calculate mode of empty dataset"
        );
    }
    std::unordered_map<double,std::size_t> frequencyMap;
    for(const auto& value: data ) {
        frequencyMap[value]++;
    }
    std::vector<double> modes;
    double maxfrequency = 0;
    for(const auto&it:frequencyMap) {
        if ((it.second) > maxfrequency) {
            maxfrequency = it.second;
            modes.clear();
            modes.push_back(it.first);
        }else if(maxfrequency == it.first) {
            modes.push_back(it.first);
        }
    }
    if(maxfrequency == 1) return {};
    return modes;
}