#pragma once

#include <vector>

/**
 * @class Statistics
 * @brief A modern C++ library for statistical computations.
 *
 * This class provides implementations of descriptive statistical
 * algorithms from scratch. The library is designed for learning
 * mathematical statistics, modern C++, and numerical computing.
 */
class Statistics {
    public:
        /**
         * Calculates the arithmetic mean of a dataset.
         * 
         * Mathematical Formula:
         * μ = Σx / N
         * 
         * @param data Input dataset.
         * @return Arithmetic mean.
         * @throws std::invalid_argument if the dataset is empty.
         */
        static double mean(const std::vector<double>& data);
        /**
         * Calculates the median of a dataset.
         * 
         * 
         * @param data Input dataset.
         * @return Median of the dataset.
         * @throws std::invalid_argument if the dataset is empty.
         * 
         * 
         * @note
         * The input dataset is copied before sorting so that the original dataset remains unchanged.
         * 
         * Time Complexity:
         * O(n log n)
         * 
         * Space Complexity:
         * O(n)
         */
        static double median(const std::vector<double>& data);
        /**
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
        /**
         * Calculates the Population Standard Deviation of a dataset.
         *
         * Mathematical Formula:
         * σ = √(Σ(x - μ)² / N)
         *
         * @param data Input dataset.
         * @return Population standard deviation.
         * @throws std::invalid_argument if the dataset is empty.
         *
         * Time Complexity:
         * O(n)
         *
         * Space Complexity:
         * O(1)
         * 
         * @note
         * This function computes the Population Standard Deviation by taking the square root of the population variance.
         */ 
        static double populationStandardDeviation(const std::vector<double>& data);
        /**
         * Calculates the Sample standard deviation of a dataset.
         *
         * Mathematical Formula:
         * s = √(Σ(x - x̄)² / (n-1))
         *
         * @param data Input dataset.
         * @return Sample Standard Deviation.
         * @throws std::invalid_argument if fewer than two observations are provided.
         *
         * Time Complexity:
         * O(n)
         *
         * Space Complexity:
         * O(1)
         * 
         * @note
         * This function computes the Sample Standard Deviation by taking the square root of the Sample variance.
         */
        static double sampleStandardDeviation(const std::vector<double>& data);

};