#include <iostream>
using namespace std;

class Addition {
    int n;
    int *ptr;
    int sum;

public:
    void getSize(){
        cout<<"Enter number of elements: ";
        cin>>n;
        ptr = new int[n];
    }

    void getElements(){
        for(int i=0;i<n;i++)
            cin>>ptr[i];
    }

    void calculateSum(){
        sum = 0;
        for(int i=0;i<n;i++)
            sum += ptr[i];
    }

    void display(){
        cout<<"Sum = "<<sum;
    }

    ~Addition(){
        delete[] ptr;
    }
};

int main(){
    Addition obj;

    obj.getSize();
    obj.getElements();
    obj.calculateSum();
    obj.display();

    return 0;
}
