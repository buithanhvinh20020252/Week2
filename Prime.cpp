#include<iostream>

using namespace std;

int main()
{
	int n, i;
	int check=1;
	cin >> n;
	if (n==1)
	{
		cout << "yes";
	}
	else  if (n>=2)
	{	
		for (i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				check=0;
			}
		}
		if (check==1)
		{
			cout << "yes";
		}
		else if (check==0)
		{
			cout << "no";
		}
	}
	
	
	
	return 0;
}
