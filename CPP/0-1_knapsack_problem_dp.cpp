// A Dynamic Programming based solution for 0-1 Knapsack problem 
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int

// A utility function that returns maximum of two llegers 
ll max(ll a, ll b) { return (a > b)? a : b; } 

// Returns the maximum value that can be put in a knapsack of capacity W 
ll knapSack(ll W, ll wt[], ll val[], ll n) 
{ 
ll i, w; 
ll K[n+1][W+1]; 

// Build table K[][] in bottom up manner 
for (i = 0; i <= n; i++) 
{ 
	for (w = 0; w <= W; w++) 
	{ 
		if (i==0 || w==0) 
			K[i][w] = 0; 
		else if (wt[i-1] <= w) 
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
		else
				K[i][w] = K[i-1][w]; 
	} 
} 

return K[n][W]; 
} 

int main() 
{ 
    ll n;
    cout << "Enter Size" << endl;
    cin >> n;
    ll val[n];
    ll wt[n];
    cout << "Enter Values of n items" << endl;
    for(ll i=0;i<n;i++){
        cin >> val[i];
    }
    cout << "Enter wights of n items" << endl;
    for(ll i=0;i<n;i++){
        cin >> wt[i];
    }
    ll W;
    cout << "Enter capacity of knapsack" << endl;
    cin >> W;
    cout << "The maximum value that can be put in knapsack is: ";
	cout << knapSack(W, wt, val, n) << endl; 
	return 0; 
} 
