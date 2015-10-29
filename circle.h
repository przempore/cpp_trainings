#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
	Circle() : Shape() {}
	~Circle() {}

public:
	virtual void move() { std::cout << "move circle" << std::endl; }

};


#endif /* CIRCLE_H */