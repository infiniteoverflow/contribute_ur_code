// C++ program to implement recursive Binary Search 
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int

// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
ll binarySearch(ll arr[], ll l, ll r, ll x) 
{ 
	if (r >= l) { 
		ll mid = l + (r - l) / 2; 

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x) 
			return mid; 

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(arr, mid + 1, r, x); 
	} 

	// We reach here when element is not 
	// present in array 
	return -1; 
} 

int main(void) 
{ 
	ll n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    ll arr[n];
    cout << "Enter the array elements" << endl;
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    ll x;
    cout << "Enter the element to be searched" << endl;
    cin >> x;
	ll result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 
