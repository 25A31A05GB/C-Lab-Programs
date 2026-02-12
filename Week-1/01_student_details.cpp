#include <iostream>
using namespace std;

int main()
{
    string name, branch, section;
    int rollNumber;

    cout << "Enter Student Name: ";
    getline(cin, name); //getline() is for taking all the input from useer

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Section: ";
    cin >> section;

    cout << "\n--- Student Details ---\n";
    cout << "Name        : " << name << endl;
    cout << "Branch      : " << branch << endl;
    cout << "Roll Number : " << rollNumber << endl;
    cout << "Section     : " << section << endl;

    return 0;
}

/*
Time Complexity: O(1)
Space Complexity: O(1)
*/
