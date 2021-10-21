#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b);
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (h(1, s * t) + pow(h(t + s, 1), 2)) / (1 + pow(h(s, t), 3));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b)
{
	return (a * a - sin(1. * b) * cos(1. * a) + b * b);
}

