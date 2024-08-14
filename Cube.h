#pragma once

namespace uiuc { // custom namespace 
	class Cube {
	public:
		Cube(); //custom default constructor
		Cube(double length); //One Arg constructor
		Cube(const Cube& obj); // copy constructor
		Cube & operator=(const Cube& obj);

		double getVolume();
		double getVolume(const Cube& obj);
		double getSurfaceArea();
		void setLength(double length);

	private:
		double length_;
	};

	void foo(Cube cube);
}

