#include <iostream>
using namespace std;
int main()
{
	float r = 3.5;
	float h = 5;
	const float pi = 3.14159;

	float v = pi * r * r * h;

	cout << "Volume of cylinder with r = " << r << " and h = " << h;
	cout << " is: " << v << endl << endl;

	return 0;

}