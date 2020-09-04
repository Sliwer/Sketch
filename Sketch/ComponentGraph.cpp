#include "ComponentGraph.h"
#include "Utils.h"

using namespace engine::graph;
using namespace engine::component;

ComponentGraph::ComponentGraph()
{
}

ComponentGraph::~ComponentGraph()
{
}

void ComponentGraph::AddNode(int x, int y)
{
	for (int i = 0; i < 10; i++) 
	{
		if (nodeIndeces[i] == 0) 
		{
			Node node(i);
			nodes.push_back(node);
		}
	}
}

Node* ComponentGraph::GetNode(int _index)
{
	std::vector<Node>::iterator it;
	for (it = nodes.begin(); it != nodes.end(); ++it)
	{
		if (it->GetIndex() == _index)
		{
			return &(*it);
		}
	}
}

void ComponentGraph::RemoveNode(Node _node)
{
	std::vector<Node>::iterator it;
	for (it = nodes.begin(); it != nodes.end(); ++it) 
	{
		if (it->GetIndex() == _node.GetIndex())
		{
			nodeIndeces[it->GetIndex()] = 0;
			nodes.erase(it);
		}
	}
}

void ComponentGraph::ConnectNodes(int _i1, int _i2)
{
	Node* n1 = new Node(0);
	Node* n2 = new Node(0);

	std::vector<Node>::iterator it;
	for (it = nodes.begin(); it != nodes.end(); ++it)
	{
		if (it->GetIndex() == _i1)
			n1 = &(*it);
		if (it->GetIndex() == _i2)
			n2 = &(*it);
	}

	n1->AddOutput(n2);
	n2->AddInput(n1);
}
