#include <iostream>
using namespace std;
int main()
{
    int a[10][10] = {{0, 0, 9}, {5, 0, 8}, {7, 0, 0}};
    int i, j, count = 0;
    int row = 3, col = 3;
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            if (a[i][j] == 0)
                count++;
        }
    }
    cout << "The matrix is:" << endl;
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The number of zeros in the matrix are " << count << endl;
    if (count > ((row * col) / 2))
        cout << "This is a sparse matrix" << endl;
    else
        cout << "This is not a sparse matrix" << endl;
    return 0;
}