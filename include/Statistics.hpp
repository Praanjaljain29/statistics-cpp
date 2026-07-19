#pragma once

#include <vector>

class Statistics {
    public:
        /**
         * Calculates the arithmetic mean of a dataset.
         * 
         * @param data Input dataset.
         * @return Arithmetic mean.
         * @throws std::invalid_argument if the dataset is empty.
         */
        static double mean(const std::vector<double>& data);
};