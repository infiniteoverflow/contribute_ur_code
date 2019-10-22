#include<iostream>
#include<string>
using namespace std;
int main(){
string name = "Shagun";
string* ptr = &name;

cout<<name<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

*ptr = "Attri";

cout<<*ptr<<endl;

cout<<&name;

return 0;
}
