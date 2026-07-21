# Statistics-CPP

A modern C++17 statistics library built completely from scratch.

The goal of this project is not only to provide statistical algorithms, but also to deeply understand the mathematics, modern C++, software engineering principles, and numerical computing behind every implementation.

---

## Objectives

- Learn mathematical statistics through implementation
- Master Modern C++ by building a real library
- Build reusable, well-documented components
- Understand algorithms instead of treating them as black boxes
- Prepare for quantitative finance, machine learning, and scientific computing

---

## Features

### Descriptive Statistics

- [x] Arithmetic Mean
- [x] Median
- [x] Population Variance
- [x] Sample Variance
- [x] Population Standard Deviation
- [x] Sample Standard Deviation
- [x] Mode

### Relationship Between Variables

- [ ] Covariance
- [ ] Pearson Correlation

### Standardization

- [ ] Z-Score

### Regression

- [ ] Linear Regression

### Dimensionality Reduction

- [ ] Principal Component Analysis (PCA)

---

## Project Structure

```
statistics-cpp/
│
├── include/
│   └── Statistics.hpp
│
├── src/
│   └── Statistics.cpp
│
├── examples/
│
├── tests/
│
├── datasets/
│
└── docs/
```

---

## Current Progress

| Function | Status | Time Complexity |
|----------|:------:|:---------------:|
| Mean | ✅ | O(n) |
| Median | ✅ | O(n log n) |
| Mode | ✅ | O(n) |
| Population Variance | ✅ | O(n) |
| Sample Variance | ✅ | O(n) |
| Population Standard Deviation | ✅ | O(n) |
| Sample Standard Deviation | ✅ | O(n) |
| Covariance | ⏳ | O(n) |
| Correlation | ⏳ | O(n) |
| Z-Score | ⏳ | O(n) |
| Linear Regression | ⏳ | O(n) |
| PCA | ⏳ | O(n³) |

---

## Learning Philosophy

Every algorithm in this library is implemented from scratch.

For every statistical concept we study:

1. Mathematics
2. Algorithm Design
3. Modern C++ Implementation
4. Complexity Analysis
5. Testing
6. Documentation

The objective is to understand *why* each algorithm works before writing code.

---

## Future Goals

- Template support
- Matrix class
- CSV Reader
- Numerical stability improvements
- Unit tests
- Benchmarks
- CMake support
- Continuous Integration (GitHub Actions)

---

## Author

**Praanjal Jain**

Built as a long-term Modern C++ and Mathematical Statistics learning project.