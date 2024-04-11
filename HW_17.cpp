#include <iostream>
using namespace std;


class Vector 
{
public:
	Vector ();
	~Vector ();
	double FindModul(double x_, double y_, double z_)
	{
		double modul = sqrt((x_ * x_ + y_ * y_ + z_ * z_));
		return modul;
	}
	void SetX(double newX)
	{
		x = newX;
	}
	void SetY(double newY)
	{
		y = newY;
	}
	void SetZ(double newZ)
	{
		z = newZ;
	}
	void SetXYZ(double newX, double newY, double newZ)
	{
		SetX(newX);
		SetY(newY);
		SetZ(newZ);
	}
	double GetX()
	{
		return x;
	}
	double GetY()
	{
		return y;
	}
	double GetZ()
	{
		return z;
	}


private:
	double x;
	double y;
	double z;
};

Vector ::Vector ()
{
}

Vector ::~Vector ()
{
}


int main()
{
	Vector vect;
	vect.SetXYZ(3, 0, 4);
	cout << vect.FindModul(vect.GetX(), vect.GetY(), vect.GetZ()) << endl;

    
}
