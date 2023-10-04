#include <iostream>
using namespace std;
class counter
{
    static int count;

public:
    counter()
    {
        count++;
    }
    void display()
    {
        cout << "Total number of objects are " << count << endl;
        ;
    }
};
int counter::count;

int main()
{
    counter obj1, obj2, obj3;
    obj3.display();
    return 0;
}