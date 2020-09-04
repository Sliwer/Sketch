#include "Rectangle.h"

using namespace engine::utils;

Rectangle::Rectangle(int _x, int _y, int _w, int _h)
{
	pos.x = _x;
	pos.y = _y;
	scale.x = _w;
	scale.y = _h;
}

Rectangle::Rectangle(Vector2<int> _pos, Vector2<int> _scale)
{
	pos = _pos;
	scale = _scale;
}

void Rectangle::Draw() const
{
	if (mode == 0)
		al_draw_rectangle(pos.x, pos.y, pos.x + scale.x, pos.y + scale.y,
			al_map_rgb(25, 25, 25), 1);
	else if (mode == 1)
		al_draw_filled_rectangle(pos.x, pos.y, pos.x + scale.x, pos.y + scale.y,
			al_map_rgb(200, 200, 200));
	else if (mode == 2) 
	{
		al_draw_filled_rectangle(pos.x, pos.y, pos.x + scale.x, pos.y + scale.y,
			al_map_rgb(200, 200, 200));

		al_draw_rectangle(pos.x, pos.y, pos.x + scale.x, pos.y + scale.y,
			al_map_rgb(25, 25, 25), 1);
	}

}

Rectangle::~Rectangle()
{

}