#include "EComponentBase.h"

using namespace engine::component;

EComponentBase::EComponentBase(Props _inProps, Props _outProps, double _resistance)
	: inProps(_inProps), outProps(_outProps), resistance(_resistance)
{

}

EComponentBase::~EComponentBase()
{

}

void EComponentBase::Draw() const
{

}

void EComponentBase::SetInProps(Props _inProps)
{
	inProps = _inProps;
}