#include <iostream>

using namespace std;

struct Shagun
{
    char name[20];
    int age;
    float grade;
};

int main()
{
    Shagun st;
    cout << "Enter apka naam:" << endl;
    cin.get(st.name, 50);
    cout << "Appki umar kya he:" << endl;
    cin >> st.age;
    cout << "Apke kitne marks aaye he is bar:" << endl;
    cin >> st.grade;

    cout << "Jankari:" << endl;
    cout << "Naam:" << st.name << endl;
    cout << "Umar:" << st.age << endl;
    cout << "ank:" << st.grade << endl;

    return 0;
}