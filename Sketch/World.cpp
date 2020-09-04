#include "World.h"

using namespace engine;

World::World()
{
	graph = ComponentGraph();

	graph.AddNode(10, 10);
	graph.AddNode(100, 100);
	graph.ConnectNodes(0, 1);

	std::cout << graph.GetNode(0)->resistance << "\n";
}

World::~World()
{

}

void World::Draw() const
{

}

void World::Update()
{

}
