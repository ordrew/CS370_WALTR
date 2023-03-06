# WALTR

WALTR is a single header C++ library for visualization of data structures, compatible with Windows, MacOS, and Linux.

## Installation

Download the files waltr.cpp and waltr.hpp and place them in your project folder.

## Usage
Here is an example using a vector.

```C++
#import <waltr.h>

int main(void) {
	std::vector<int> vec = {0,1,2,3,4};
	DrawStructure drawStructure = DrawStructure(vec);

	return 0;
}
```

To use it, you just drop them right into your project.

1. Grab  **waltr.cpp** and **tigr.hpp**
2. Throw them into your project.
3. Link with
    - -lopengl32 and -lgdi32 on Windows
    - -framework OpenGL and -framework Cocoa on macOS
    - -lGLU -lGL -lX11 on Linux
4. You're done!

Ex: ```g++ main.cpp waltr.cpp -lopengl32 -lgdi32```

## Restrictions

Currently, WALTR only supports the integer type (More types in the future!)