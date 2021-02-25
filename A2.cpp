#include<iostream>
using namespace std;
int main()
{
	int hours, wage;
	cin >> hours;
	if (hours<=100)
	{
		wage = 12000 * hours;
	}
	else if (hours>100 && hours<=150)
	{
		wage = 100 * 12000 + (hours-100) * 16000;
	}
	else if (hours>150 && hours<=200)
	{
		wage = 100 * 12000 + 50 * 16000 + (hours-150) * 20000;
	}
	else if (hours>200)
	{
		wage = 100 * 12000 + 50 * 16000 + 50 * 20000 + (hours-200)*25000;
	}
	cout << "wage = " << wage;
	return 0;
}
