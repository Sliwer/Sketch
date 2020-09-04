#pragma once
#include <iostream>

namespace engine { namespace utils {

	template<typename T> struct Vector2;

	template<> struct Vector2<int>
	{
		Vector2();
		Vector2(int _x, int _y);
		~Vector2();

		int x, y;

		Vector2<int> operator+(const Vector2<int> &v) {
			Vector2<int> vec2;
			vec2.x = x + v.x;
			vec2.y = y + v.y;
			return vec2;
		}

		friend std::ostream& operator<<(std::ostream& output, const Vector2<int>& v) {
			output << v.x << " " << v.y;
			return output;
		}
	};

	template<> struct Vector2<double>
	{
		Vector2();
		Vector2(double _x, double _y);
		~Vector2();

		double x, y;

		Vector2<double> operator+(const Vector2<double>& v) {
			Vector2<double> vec2;
			vec2.x = x + v.x;
			vec2.y = y + v.y;
			return vec2;
		}

		friend std::ostream& operator<<(std::ostream& output, const Vector2<double>& v) {
			output << v.x << " " << v.y;
			return output;
		}
	};

} }


