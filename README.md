# GaussianSplatting3DRender

## Overview
This project for a proof of concept and problem solving for the integration of Gaussian Splatting with Machine Learning to optimize the rendering process in 3D graphics applications.I aims to enhance efficiency in rendering complex 3D scenes throught dynamic selection of paramether.

My goal here is to lower rendering time in VFX and to explore new application of Gaussian slatting in the VFX pipeline.


## Features
- **Gaussian Splatting in OpenGL**: Implements Gaussian Splatting using GLSL
- **Machine Learning Optimization**: Use TensorFlow to train a model base on parameter such as scnene complexity (Obj Count, Geom Complexity, Tex Res & Diversity, Lighting & Shadowing, Shader & MatFX aand probaably more !). (WORK IN PROGRESS) - I currently work with a vfx/3d professionnal for building a data set made to evaluate the most optimal parameter.
- **Real-Time Integration**: Achieves real-time integration of ML predictions within the rendering pipeline. (GOAL)

## Getting Started

### Prerequisites
- OpenGL with GLSL support.
- TensorFlow for Python 
- 22vscode file
- GLAD
- GLFW
- KHR

## Contact
Jacob Cossette - jacob.cossette.1@ens.etsmtl.ca

Project Link: [https://github.com/Jacob-Cossette/GaussianSplatting3DRender](https://github.com/Jacob-Cossette/GaussianSplatting3DRender)
