#pragma once
#include <vector>
#include "Node.h"

namespace engine { namespace graph {
	class ComponentGraph
	{
	public:
		ComponentGraph();
		~ComponentGraph();

		void AddNode(int x, int y);
		Node* GetNode(int _index);
		void RemoveNode(Node _node);
		void ConnectNodes(int _i1, int _i2);
	private:
		int nodeIndeces[10] = { 0,0,0,0,0,0,0,0,0,0 };
		std::vector<Node> nodes;
	};
} }
