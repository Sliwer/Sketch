#include "Vector2.h"

using namespace engine::utils;

Vector2<int>::Vector2()
{
	x = 0;
	y = 0;
}

Vector2<int>::Vector2(int _x, int _y)
	: x(_x), y(_y)
{

}

Vector2<int>::~Vector2()
{

}

Vector2<double>::Vector2()
{
	x = 0.0;
	y = 0.0;
}

Vector2<double>::Vector2(double _x, double _y)
	: x(_x), y(_y)
{

}

Vector2<double>::~Vector2()
{

}
