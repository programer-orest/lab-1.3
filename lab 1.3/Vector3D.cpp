#include "Vector3D.h"

double Vector3D::GetX() const { return x; }
double Vector3D::GetY() const { return y; }
double Vector3D::GetZ() const { return z; }

void Vector3D::SetX(double value) { x = value; }
void Vector3D::SetY(double value) { y = value; }
void Vector3D::SetZ(double value) { z = value; }

void Vector3D::Init(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
void Vector3D::Read()
{
	cout << "\nX = "; cin >> x;
	cout << "\nY = "; cin >> y;
	cout << "\nZ = "; cin >> z;

	Init(x, y, z);
}
void Vector3D::Display()
{
	cout << "\n\nX = " << x << endl;
	cout << "Y = " << y << endl;
	cout << "Z = " << z << endl;
}

Vector3D Vector3D::Add(Vector3D first, Vector3D second)
{
	Vector3D t;
	t.x = first.x + second.x;
	t.y = first.y + second.y;
	t.z = first.z + second.z;
	return t;
}
Vector3D Vector3D::Subtruct(Vector3D first, Vector3D second)
{
	Vector3D t1;
	t1.x = first.x - second.x;
	t1.y = first.y - second.y;
	t1.z = first.z - second.z;
	return t1;
}
double Vector3D::Scalar(Vector3D first, Vector3D second)
{
	Vector3D t2;
	t2.x = first.x * second.x;
	t2.y = first.y * second.y;
	t2.z = first.z * second.z;
	return t2.x + t2.y + t2.z;
}

string Vector3D::toString() const
{
	stringstream sout;

	sout << "\n\nX = " << GetX() << endl;
	sout << "Y = " << GetY() << endl;
	sout << "Z = " << GetZ() << endl;

	return sout.str();
}

