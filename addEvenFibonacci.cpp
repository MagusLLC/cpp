#include <iostream>
using namespace std;

int main()
{
    int n, first = 1, second = 1, temp, sum=0;
    cout<<"Enter number of terms: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        if ((first%2)==0){
            sum = sum + first;
        }
        cout<<first<<endl;
        temp = first + second;
        first = second;
        second = temp;
    }
    cout<<"Sum of all even numbers of fibonacci series till "<<n<<" is "<<sum<<endl;
    return 0;
}