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
        /**
         * Calculates the median of a dataset.
         * 
         * @param data Input dataset.
         * @return Median of the dataset.
         * @throws std::invalid_argument if the dataset is empty.
         * 
         * Time Complexity:
         * O(n log n)
         * 
         * Space Complexity:
         * O(n)
         */
        static double median(const std::vector<double>& data);
};