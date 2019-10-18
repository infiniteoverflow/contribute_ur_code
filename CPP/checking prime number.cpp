#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n, i;
  cout << "Enter a positive integer n : ";
  cin >> n;
  for(i = 2; i * i <= n ; i++)
  {
      if(n % i == 0)
      {
          cout<<" n is not a Prime number" << endl;
          exit(0);
      }
  }
  cout << " n is a Prime number" << endl; 
  return 0;
}
