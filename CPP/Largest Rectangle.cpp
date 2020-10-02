#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   long long n,arr[100001],i,j,max,temp=-1,k,count=1,val;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        val=arr[i];
      int cl1=1,cl=1;
        for(j=i-1,k=i+1;j>=0 || k<n;j--,k++){
            if(j>=0 && arr[j]>=val && cl1==1){
                count++;
            }else cl1=0;
            if(k<n && arr[k]>=val && cl==1){
                count++;
            }else cl=0;
            if(cl==0 && cl1==0)
                break;
        }
        max=val*count;
        if(max>temp){
            temp=max;
        }
        count=1;
        
    }
    cout<<temp;
    return 0;
}
