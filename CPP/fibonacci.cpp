#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=1,c,n;
	cin>>n;
	if (n>=2)
	{
		cout<<a<<" "<<b;
		cout<<" ";
		for (int i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			cout<<c<<" ";
		}
	}
	return 0;
}
