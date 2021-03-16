#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Vector3D
{
	double x, y, z;
public:
	double GetX() const;
	double GetY() const;
	double GetZ() const;

	void SetX(double value);
	void SetY(double value);
	void SetZ(double value);

	void Init(double x, double y, double z);
	void Read();
	void Display();

	Vector3D Add(Vector3D first, Vector3D second);
	Vector3D Subtruct(Vector3D first, Vector3D second);
	double Scalar(Vector3D first, Vector3D second);

	string toString() const;
};
