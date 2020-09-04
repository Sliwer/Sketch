#include "Props.h"

using namespace engine::component;

Props::Props()
{
	current = 10;
	voltage = 10;
}

Props::Props(double _current, double _voltage)
	: current(_current), voltage(_voltage)
{

}

Props::~Props()
{

}