#include<iostream>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b)
	{
		cout << "It's a triangle ";
		if(a * a + b * b == c * c||b * b + c * c == a * a|| c * c + a * a == b * b)
		{
			cout << "and it's a right triangle.";
		}
		else if (a == b && b == c && c == a)
		{
			cout << "and it's a equilateral triangle";
		}
		else if (a == b && a!=c || b == c && b!= a || c == a && c!=b )
		{
			cout << "and it's a isosceles triangle";
		}
		else cout << "and it's just a regular triangle";
	}
	else cout << "It's not a triangle'";
}
