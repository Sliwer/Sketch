#pragma once

namespace engine { namespace component {
	struct Props
	{


		Props();
		Props(double _current, double _voltage);
		~Props();

		double current;
		double voltage;
	};
} }

