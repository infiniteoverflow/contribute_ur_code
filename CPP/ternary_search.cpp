// C++ program to illustrate 
// recursive approach to ternary search 
#include <bits/stdc++.h> 
using namespace std; 

// Function to perform Ternary Search 
int ternarySearch(int l, int r, int key, vector<int> &ar) 
{ 
	if (r >= l) 
	{ 

		// Find the mid1 and mid2 
		int mid1 = l + (r - l) / 3; 
		int mid2 = r - (r - l) / 3; 

		// Check if key is present at any mid 
		if (ar[mid1] == key) 
		{ 
			return mid1; 
		} 
		if (ar[mid2] == key) 
		{ 
			return mid2; 
		} 

		// Since key is not present at mid, 
		// check in which region it is present 
		// then repeat the Search operation 
		// in that region 
		if (key < ar[mid1]) 
		{ 

			// The key lies in between l and mid1 
			return ternarySearch(l, mid1 - 1, key, ar); 
		} 
		else if (key > ar[mid2]) 
		{ 

			// The key lies in between mid2 and r 
			return ternarySearch(mid2 + 1, r, key, ar); 
		} 
		else
		{ 

			// The key lies in between mid1 and mid2 
			return ternarySearch(mid1 + 1, mid2 - 1, key, ar); 
		} 
	} 

	// Key not found 
	return -1; 
} 

// Driver code 
int main() 
{ 
	int l, r, p, key; 

	// Get the array 
	// Sort the array if not sorted
	int size;
	cout<<"Enter the size of array: ";
	cin>>size; 
	cout<<"Enter the sorted array: ";
	vector<int> ar(size);
	for(int i = 0; i < size; i++)
	{
		cin>>ar[i];
	}

	// Starting index, ending index 
	l = 0, r = size-1;  

	// Key to be searched in the array 
	cout<<"Enter the key to be searched: ";
	cin>>key;

	// Search the key using ternarySearch 
	p = ternarySearch(l, r, key, ar); 

	// Print the result 
	cout << "Index of " << key 
		<< " is " << p << endl; 
} 


