#include <iostream>
using namespace std;

class B;

class A
{
    int var1, var2;

public:
    void get()
    {
        cout << "Enter value of first variable of first class: ";
        cin >> var1;
        cout << "Enter value of second variable of first class: ";
        cin >> var2;
    }
    friend void arrange(A, B);
};

class B
{
    int var3, var4;

public:
    void get()
    {
        cout << "Enter value of first variable of second class: ";
        cin >> var3;
        cout << "Enter value of second variable of second class: ";
        cin >> var4;
    }
    friend void arrange(A, B);
};

void arrange(A obja, B objb)
{
    int arr[4];
    arr[0] = obja.var1;
    arr[1] = obja.var2;
    arr[2] = objb.var3;
    arr[3] = objb.var4;

    for (int j = 0; j < 4; j++)
    {
        for (int i = (j+1); i < 4; i++)
        {
            int bin;
            if (arr[j] < arr[i])
            {
                bin = arr[j];
                arr[j] = arr[i];
                arr[i] = bin;
            }
        }
    }
    for (int k = 0; k < 4; k++)
    {
        cout<<arr[k]<<endl;
    }
    
}

int main()
{
    A a;
    B b;
    a.get();
    b.get();
    arrange(a, b);

    return 0;
}