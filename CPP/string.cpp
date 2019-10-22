#include<iostream>
#include<string>
using namespace std;

int main(){
string fname = "ID10t";
string lname = "Alderson";
string fullname = fname + lname;

cout<<fullname<<endl;

cout<<"Length:"<<fullname.length()<<endl;


cout<<fname[0]<<endl;

fname[0] = 'A';

cout<<fname<<endl;

return 0;
 }
