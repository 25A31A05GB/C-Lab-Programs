#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        cout << n << " is a Prime Number";
    else
        cout << n << " is Not a Prime Number";

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
