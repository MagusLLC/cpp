#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, second = 1, temp = 0;
    
    cout<<"Enter number of terms: ";
    cin>>num;
    cout<<"Missing terms are: "<<endl;

    for(int i=0; i<(num-1); i++) {

        int diff = second-first;
        if (diff>1) {
            for (int j=1; j<diff; j++) {
                cout<<first+j<<endl;
            }
        }

        temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}