#include <iostream>
#include <cstring>

using namespace std;

struct stud
{
    int rollNo;
    string name;
    int phoneNo;
};

int main()
{
    struct stud id[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Naam Likho:" << endl;
        cin >> id[i].name;
        cout << "rollNo Likho:" << endl;
        cin >> id[i].rollNo;
        cout << "mobileNo likho:" << endl;
        cin >> id[i].phoneNo;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Tumhara Naam he:" << id[i].name << endl;
        cout << "Tumhara rollNo he:" << id[i].rollNo << endl;
        cout << "Tumhara Mobil No he:" << id[i].phoneNo << endl;
    }
    return 0;
}