#include "Node.h"

using namespace engine::graph;

Node::Node(int _index)
	: index(_index)
{
	Init();
}

Node::Node(int _index, double _resistance)
	: index(_index), resistance(_resistance)
{
	Init();
}

Node::~Node()
{
	
}

void Node::Init()
{
	outputProps = Props(10, 10);
}

void Node::CalcProps()
{
	// Calculate new props based on things like resistance,
	// change the current type and things like that 
	
	// Get the input props from one of the wires since all
	// of the wires shouls have the same props,
	/// TODO: check that all the wires have the same props or else fire!!!
	if (inputNodes.empty())
	{
		std::cout << "Node without input: " << index << "\n";
		return;
	}

	Props inProps = (*inputNodes.begin())->GetOutput();

	outputProps.current = inProps.current - resistance;
	outputProps.voltage = inProps.voltage - resistance;
}

void Node::AddInput(Node* _node)
{
	inputNodes.push_back(_node);
}

void Node::AddOutput(Node* _node)
{
	outputNodes.push_back(_node);
}

void Node::RemoveInput(Node* _node)
{
	std::vector<Node*>::iterator it;
	for (it = inputNodes.begin(); it != inputNodes.end(); ++it)
	{
		if ((*it)->GetIndex() == _node->GetIndex()) 
		{
			inputNodes.erase(it);
			break;
		}
	}
}

void Node::RemoveOutput(Node* _node)
{
	std::vector<Node*>::iterator it;
	for (it = outputNodes.begin(); it != outputNodes.end(); ++it)
	{
		if ((*it)->GetIndex() == _node->GetIndex())
		{
			outputNodes.erase(it);
			break;
		}
	}
}

Props Node::GetOutput()
{
	return outputProps;
}
