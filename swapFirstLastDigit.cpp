#include <iostream>
using namespace std;

int main()
{
    int num, rev, i=0, arr[10];
    cout<<"Enter the number: ";
    cin>>num;

    do {
        arr[i] = num%10;
        num = num - arr[i];
        num = num/10;
        i++;
    } while (num>0);

    cout<<"The number after swaping first and last digits is ";
    cout<<arr[0];
    for (int j=(i-2); j>0; j--) {
        cout<<arr[j];
    }
    cout<<arr[i-1]<<endl;

    return 0;
}