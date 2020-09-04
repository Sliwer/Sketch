#pragma once
#include <vector>
#include <allegro5/allegro_primitives.h>
#include "ComponentGraph.h"

using namespace engine::graph;

namespace engine
{
	class World
	{
	public:
		World();
		~World();

		void Draw() const;
		void Update();

	private:
		ComponentGraph graph;
	};
}


