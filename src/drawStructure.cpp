#include <stack>
#include <vector>
#include <array>
#include <queue>

#include <iostream>

#include "drawStructure.hpp"
#include "waltrArray.cpp"

/*
Function description:
drawStructure()

This function will be passed a data structure and will call the proper function to
draw the passed data structure.

INPUT: An STL array, C Style array, or vector.
OUTPUT: None
*/


/*
INPUT: Pointer to C-Style Array, Size of array

Creates shallow copy stored within object and calls function to draw
*/
DrawStructure::DrawStructure(const int* c_array, int c_size) {
	toVector(c_array, c_array + c_size);
	drawArray(memory_vector);
	//drawVector(memory_vector);	
}

/*
INPUT: Vector

Creates shallow copy stored within object
*/
DrawStructure::DrawStructure(const std::vector<int> vector) {
    toVector(vector.data(), vector.data() + vector.size());
}

/*
INPUT: Pointer to beginning of array, pointer to end of array

Creates a shallow copy of the inputted structure, and stored
in the created DataStructure object.
*/
void DrawStructure::toVector(const int* begin, const int* end) {
	for(int*i = (int*)begin; i < end; i++) {
		memory_vector.push_back(i);
	}
}

/*
Prints vector, used for testing

To print value, index must be dereferenced with *
*/
void DrawStructure::printVector(std::vector<int *> vector) {
	for(auto &x: vector) {
		std::cout<<*x<<" ";
	}
}