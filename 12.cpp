#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double m= sqrt(n);
	if (pow(m, 2)==n)
	{
		cout << n << " la so chinh phuong";
	}
	else cout << n << " khong la so chinh phuong";
	return 0;
}
