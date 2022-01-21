#include <iostream>
using namespace std;
struct sinhvien
{
    string name;
    int age;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    sinhvien s[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i].name >> s[i].age;
    }
    for (int i = 0; i < n; ++i)
    {
        s[i].display();
    }
    return 0;
}