// Write a quadratic equation.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float  a, b, c;
	cout << "Enter 3 numbers with a space in between each one: " <<endl;
	cin >> a >> b >> c;
	float x = 0;
	float x2 = 0;
	float discriminant = 0;
	discriminant = b*b - 4*a*c;
	if (discriminant > 0) {
	x = (-b -sqrt( discriminant)) / (2*a);
	x2 = (-b + sqrt( discriminant)) / (2*a);
	cout << "These are your answers: " << x << " and " << x2<< endl;
	}
	else if (discriminant == 0) {
	x = (-b -sqrt( discriminant)) / (2*a);
	cout << "This is your answer: " << x << endl;
	}
	else {
	float imag = 0;
	float real = 0;
	real = (-b) / (2*a);
	imag = sqrt(-discriminant) / (2*a);
	cout << "These are your answers: " << real << " + " << imag << "i" << " and " << real << " - " << imag << "i" << endl;
	}
	return 0;
}
