//PROGRAM TO DISPLAY TRANSPOSE OF MATRIX.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
   int i,j,r,c,A[10][10],T[10][10];

   cout<<"Enter the number of rows and columns of matrix  :  \n";
   cin>>r>>c;
   cout<<"Enter the elements of matrix  : \n";
   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
	 cin>>A[i][j];
      }
   }
   cout<<"\nMatrix is  :   \n";
   for( i = 0 ; i < r ; i++ )
   {
	for( j = 0 ; j < c ; j++ )
	{
	    cout<<"  "<<A[i][j];
	}
	cout<<endl;
   }

   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
	 T[i][j] = A[j][i];
      }
   }

   cout<<"\nTranspose of entered matrix : \n";

   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
	 cout<<"  "<<T[i][j];
      }
      cout<<endl;
   }
  getche();
   }
