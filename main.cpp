#include <iostream>
#include "shape.h"
#include "circle.h"


int main()
{
	Shape* cos = new Circle();

	cos->move();
	std::cout << "dupa" << std::endl;
 
}