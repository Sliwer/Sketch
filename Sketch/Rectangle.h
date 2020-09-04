#pragma once
#include <iostream>
#include <allegro5/allegro_primitives.h>
#include "Utils.h"

namespace engine { namespace utils {
	struct Rectangle
	{
	private:
		// Mode refers to drawing the rect filled or just outline
		// 0 is outline, 1 is fill, 2 is fill with outline
		unsigned int mode = 0;
	public:
		Rectangle() = default;
		Rectangle(int _x, int _y, int _w, int _h);
		Rectangle(Vector2<int> _pos, Vector2<int> _scale);
		~Rectangle();

		Vector2<int> pos;
		Vector2<int> scale;

		void Draw() const;

		inline int GetMode() const { return mode; }
		// TODO: Add a summary thing to explain how mode works
		// Cause why not
		inline void SetMode(unsigned int val) { 
			if (mode > 3)
			{
				// Do some sort of error thing
				return;
			}
			
			mode = val; 
		}

		friend std::ostream& operator<<(std::ostream& output, const Rectangle rect) {
			output << "pos: " << rect.pos << " scale: " << rect.scale;
			return output;
		}
	};
} }


