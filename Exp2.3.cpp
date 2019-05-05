// This program  calculates the value of V in line with the given values of x and y.
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int x;
	double y,z,V1,V2,V3,V4,V5;
	cout << "Enter a value for x: \n"; cin >> x;
	cout << "Enter a value for y: \n"; cin >> y;
	z = 2.5;
	V1 = x * y * z;
	V2 = x + y / z;
	V3 = abs((x - y)/ z);
	V4 = x - sqrt(y+z);
	V5 = x + y + z;
	switch (x)
	{
		case 1:
		if (y > 1 && y < 5)
		cout << "Then the V is equal to: \n" << std::setw(10) << fixed << setprecision (2)<< V1;
		
		
		
		else if (y >= 5)
		cout << "Then the V is equal to: \n" << std::setw(10) << fixed << setprecision (2)<< V2;
		return 0;
		break;
		
		
		
		
		case 2:
		if (y <= 5)
		cout << "Then the V is equal to: \n" << std::setw(10) << fixed << setprecision (2) << V3;
		
		
		
		
		else if (y > 5)
		cout << "Then the V is equal to: \n" << std::setw(10) << fixed << setprecision (2) << V4;
		return 0;
		break;
		
		
		
		
		default:
		cout << "Then the V is equal to: \n" << std::setw(10) << fixed << setprecision (2) << V5;
		return 0;
		break;
		
		
	}
	getch ();
	return 0;
}
