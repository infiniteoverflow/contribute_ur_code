#include <iostream>

using namespace std;

void factorial(int num)
{
	long int factrl=1;
	for(int i=1;i<=num;i++)
	{
		factrl=factrl*i;
	}
	cout << factrl;
}

int main() 
{
	int num;
	cin >> num;
	factorial(num);
	return 0;
}										
	
	
	
