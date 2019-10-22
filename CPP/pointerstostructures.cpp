#include <iostream>
#include <cstring>

using namespace std;

struct stud
{
    int rollNo;
    string name;
};

int main()
{
    struct stud point = {181, "shagun"};
    struct stud *ptr;
    ptr = &point;

    cout << point.rollNo << " " << point.name << endl;
    cout << ptr->rollNo << " " << ptr->name << endl;

    return 0;
}