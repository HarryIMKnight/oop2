#include <iostream>
#include "triangle.h"

int main() 
{
	Triangle t1;
	float hypot{ 0 };
	float area{ 0 };

	hypot = t1.hypot();
	std::cout << hypot << "\n";

	area = t1.area();
	std::cout << area << "\n";

}

