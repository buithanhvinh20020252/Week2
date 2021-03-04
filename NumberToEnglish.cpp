#include<iostream>
using namespace std;
int cal(int number)
{
	int a, b, c;
	a=number/100;
	b=(number-a*100)/10;
	c=(number%100)%10;
	string arr[]= {" one", " two", " three", " four", " five", " six", " seven", " eight", " nine"};
	switch(a)
	{
	case 1:
		cout << arr[0] << " hundred";
		break;
	case 2:
		cout << arr[1] << " hundred";
		break;
	case 3:
		cout << arr[2] << " hundred";
		break;
	case 4:
		cout << arr[3] << " hundred";
		break;
	case 5:
		cout << arr[4] << " hundred";
		break;	
	case 6:
		cout << arr[5] << " hundred";
		break;	
	case 7:
		cout << arr[6] << " hundred";
		break;
	case 8:
		cout << arr[7] << " hundred";
		break;
	case 9:
		cout << arr[8] << " hundred";
		break;
	case 0:
		break;
	}
	if (b==1)
	switch (c)
			{
				case 0:
					cout << " ten";
					break;
				case 1:
					cout << " eleven";
					break;
				case 2:
					cout << " twelve";
					break;
				case 3:
					cout << " thirteen";
					break;
				case 4:
					cout << " fourteen";
					break;
				case 5:
					cout << " fifteen";
					break;
				case 6:
					cout << " sixteen";
					break;
				case 7:
					cout << " seventeen";
					break;
				case 8:
					cout << " eighteen";
					break;
				case 9:
					cout << " nineteen";
			}
	else if(b==0)
	{
		cout << " and";
		switch (c)
		{
			case 0:
				break;
			case 1:
				cout << arr[0];
				break;
			case 2:
				cout << arr[1];
				break;
			case 3:
				cout << arr[2];
				break;
			case 4:
				cout << arr[3];
				break;
			case 5:
				cout << arr[4];
				break;
			case 6:
				cout << arr[5];
				break;
			case 7:
				cout << arr[6];
				break;
			case 8:
				cout << arr[7];
				break;
			case 9:
				cout << arr[8];
				break;
		}
	}
	else
	{	
		cout << " and";
		switch (b)
			{
				case 2:
					cout << " twenty";
					break;
				case 3:
					cout << " thirty";
					break;
				case 4:
					cout << " forty";
					break;
				case 5:
					cout << " fifty";
					break;
				case 6:
					cout << " sixty";
					break;
				case 7:
					cout << " seventy";
					break;
				case 8:
					cout << " eighty";
					break;
				case 9:
					cout << " ninety";
				break;
			}
		switch (c)
		{
			case 1:
				cout << arr[0];
				break;
			case 2:
				cout << arr[1];
				break;
			case 3:
				cout << arr[2];
				break;
			case 4:
				cout << arr[3];
				break;
			case 5:
				cout << arr[4];
				break;
			case 6:
				cout << arr[5];
				break;
			case 7:
				cout << arr[6];
				break;
			case 8:
				cout << arr[7];
				break;
			case 9:
				cout << arr[8];
				break;
		}
	}
	
		
}
int main()
{
	int number, a, b, c;
	int number1, number2, number3;
	cin >> number;
	if(number==0)
	{
		cout << "zero";
	}
	if(number<0)
	{
		number=number*-1;
		cout << "negative ";
	}
	if (number>=1000000&&number<=999999999)
	{
		number1=number/1000000;
		cal(number1);
		cout << " million";
		number2=(number-(number1*1000000))/1000;
		cal(number2);
		cout << " thousand";
		number3=number%(number1*1000000+number2*1000);
		cal(number3);
	}
	if(number<=999999&&number>=1000)
	{
		number1=number/1000;
		cal(number1);
		cout << " thousand";
		number2=number-(number1*1000);
		cal(number2);
	}
	if(number<=1000&&number>0)
	{
		cal(number);
	}
	return 0;
}
