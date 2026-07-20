#pragma once

#include <vector>

class Statistics {
    public:
        /**
         * @note
         * Calculates the arithmetic mean of a dataset.
         * 
         * @param data Input dataset.
         * @return Arithmetic mean.
         * @throws std::invalid_argument if the dataset is empty.
         */
        static double mean(const std::vector<double>& data);
        /**
         * @note
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
        /**
         * @note
         * Calculates the population variance of a dataset.
         *
         * Mathematical Formula:
         * σ² = Σ(x - μ)² / N
         *
         * @param data Input dataset.
         * @return Population variance.
         * @throws std::invalid_argument if the dataset is empty.
         *
         * Time Complexity:
         * O(n)
         *
         * Space Complexity:
         * O(1)
         */
        static double populationVariance(const std::vector<double>& data);
        /**
         * @note
         * Calculates the sample variance of a dataset.
         *
         * Mathematical Formula:
         * s² = Σ(x - x̄)² / (n - 1)
         * 
         * @param data Input dataset.
         * @return Sample variance.
         * @throws std::invalid_argument if fewer than two observations are provided.
         * 
         * Time Complexity:
         * O(n)
         * 
         * Space Complexity:
         * O(1)
         */
        static double sampleVariance(const std::vector<double>& data);
};