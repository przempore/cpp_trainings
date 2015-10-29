#ifndef SHAPE_H
#define SHAPE_H

#include <utility>

class Shape
{
public:
	Shape() {};
	virtual ~Shape() {};

public:
	virtual void move() = 0;

protected:
	int m_degree;
	std::pair<int, int> m_coord;
};

#endif /* SHAPE_H */