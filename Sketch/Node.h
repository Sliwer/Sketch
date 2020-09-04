#pragma once
#include <vector>
#include <iostream>
#include "EComponentBase.h"

using namespace engine::component;

namespace engine { namespace graph {
	class Node
	{
	public:
		Node(int _index);
		Node(int _index, double _resistance);
		~Node();

		// Modifiers
		double resistance = 1;

		void CalcProps();
		void AddInput(Node* _node);
		void AddOutput(Node* _node);
		void RemoveInput(Node* _node);
		void RemoveOutput(Node* _node);
		Props GetOutput();

		inline int GetIndex() const { return index; };
	private:
		int index;

		std::vector<Node*> outputNodes;
		std::vector<Node*> inputNodes;
		Props outputProps;

		void Init();
	};

} }

