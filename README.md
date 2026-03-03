# Molecular Random Walk Visualization

### Overview

This repository contains a simple C++ simulation engine designed to visualize stochastic molecular dynamics. By leveraging OpenGL, the software provides real-time rendering of random walk algorithms, serving as a computational model for processes like ion diffusion kinetics and transmembrane channel permeation.

### Mathematical Formulation

The core simulation relies on a discretized random walk model to approximate Brownian motion. The position vector of a particle at a given time step is calculated as:

$$\vec{r}(t + \Delta t) = \vec{r}(t) + \delta \vec{r}$$

The displacement vector $\delta \vec{r}$ is generated using stochastic sampling from a uniform or Gaussian distribution, utilizing the C++ `<random>` library to ensure pseudo-random number generation.

### Dependencies

To compile this project, your system must have the following libraries installed:

* CMake (Version 3.10 or higher)
* OpenGL (Native Apple Framework)
* GLFW (Window and input management)
* GLEW (OpenGL extension wrangler)
* GLM (Mathematics library for 3D software)

### Build Instructions

This project follows standard out-of-source build practices to keep the directory clean. Execute the following commands in your terminal:

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./MolecularVis