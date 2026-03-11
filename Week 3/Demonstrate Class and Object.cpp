#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    void getData()
    {
        cout << "Enter name and roll: ";
        cin >> name >> roll;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    Student s;   // object

    s.getData();
    s.display();

    return 0;
}

