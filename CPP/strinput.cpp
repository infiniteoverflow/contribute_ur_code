#include<iostream>
#include<string>
using namespace std;
int main(){
string fname,fullname;
cout<<"fname:"<<endl;
getline(cin,fname);
fullname = fname;
cout<<fullname<<endl;
cout<<fullname.length();
return 0;
}

