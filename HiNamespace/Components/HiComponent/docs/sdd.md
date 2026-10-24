# HiNamespace::HiComponent

Hello World Tutorial Component

## Introduction

<!-- High level introduction, FPP interfaces?, high-level features? -->

## Requirements

| Name | Description | Rationale | Validation |
|---|---|---|---|
|   |   |   |   |

## Design

<!-- Explain high level design and important internal details -->

## Configuration

<!-- If the component requires configuration at initialization, document here -->

## MY NOTES
> 
> [Hello World Tutorial](https://fprime.jpl.nasa.gov/latest/tutorials-hello-world/docs/hello-world/#6-more-to-explore)

* Components (component.cpp command handler & component.hpp declare var)

```bash
edit component.cpp firrst
fprime-util impl
mv HiComponent.template.cpp HiComponent.cpp
mv HiComponent.template.hpp HiComponent.hpp
edit component.hpp
fprime-util build
```

* Routing Integration (instances.fpp & topology.fpp)
> http:127.0.0.1:5000

```bash
# From: hello-project/
source fprime-venv/bin/activate   # Or activate.csh in C-like shells
fprime-util format  --dirs HiNamespace

fprime-util purge
fprime-util generate
fprime-util build
fprime-gds
CTRL-C
```