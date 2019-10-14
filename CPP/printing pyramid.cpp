// C++ code to demonstrate star pattern 
#include <iostream> 
using namespace std; 
  
// Function to demonstrate printing pattern 
void triangle(int n) 
{ 
    // number of spaces 
    int k = 2*n - 2; 
  
    // outer loop to handle number of rows 
    //  n in this case 
    for (int i=0; i<n; i++) 
    { 
        // inner loop to handle number spaces 
        // values changing acc. to requirement 
        for (int j=0; j<k; j++) 
            cout <<" "; 
  
        // decrementing k after each loop 
        k = k - 1; 
  
        //  inner loop to handle number of columns 
        //  values changing acc. to outer loop 
        for (int j=0; j<=i; j++ ) 
        { 
            // printing stars 
            cout << "* "; 
        } 
  
        // ending line after each row 
        cout << endl; 
    } 
} 
  
// Driver Function 
int main() 
{ 
    int n = 5; 
    triangle(n); 
    return 0; 
}
