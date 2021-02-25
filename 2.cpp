#include<iostream>
#include<math.h>
using namespace std;


int main ()
{
	double x;
	int y;
	double result1=1;
	double result2;
	cin >> x >> y;
	result2 = pow(x, y);
	while (y>0)
	{
		result1 *=x;
		y--; 
	}
	cout << "Ket qua khi su dung do while: "<< result1 << endl;
	cout << "Ket qua khi su dung ham pow: " << result2;
	return 0;
}
