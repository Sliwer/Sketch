#pragma once
#include "Props.h"
#include "Utils.h"

namespace engine { namespace component {
	class EComponentBase
	{
	public:
		EComponentBase() = default;
		EComponentBase(Props _inProps, Props _outProps, double _resistance);
		~EComponentBase();

		virtual void Draw() const;

		inline utils::Rectangle getRect() { return rect; }

		void SetInProps(Props _inProps);
	private:
		Props inProps;
		Props outProps;

		double resistance;

		utils::Rectangle rect;
	};
} }


