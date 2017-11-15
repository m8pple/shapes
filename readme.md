Overview
========

Source code is available:

- On USB

- Via github: https://github.com/m8pple/shapes

The source code contains a very simple class hierarchy
for describing 2D geometric objects.

The source files are split into:

- `inc/*.hpp` : header files

- `lib/*.cpp` : implementation code

- `src/*.cpp` : driver programs

Feel free to just keep silent if you want to concentrate,
or describe what you're doing if you prefer.

Task0 : get it compiling
========================

Get the code compiling, then run it.

Task1 : add a class called `polygon`.
=====================================

Add a class called `polygon` which represents a polygon,
plus a new driver program `src/main_polygon` which
demonstrates this class in use.

Task2 : const correctness for `to_s`.
=====================================

The method `to_s` is currently not const-correct. Make it so.

Task3 : Add a new shape called `composite`
==========================================

Add a new class called `composite` should be able to support
a group composed of zero or more shapes (of any type).

Critiquing/discussion (oral)
============================

- What is good or bad about this class hierarchy?
- How would you have done it?
- How might this relate to undergraduate teaching?

