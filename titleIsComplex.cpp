#include <iostream>
using namespace std;



/*
Write a program to find product of numbers between 100 and 200 which are divisible by 5 and 11.
*/




class num
{
public:
    void execute()
    {
        for (int i = 101; i < 200; i++)
        {
            if ((i % 5) == 0)
            {
                for (int j = 101; j < 200; j++)
                {
                    if ((j % 11) == 0)
                    {
                        cout << i << " x " << j << " = " << i * j << endl;
                    }
                }
            }
        }
    }
};

int main()
{
    num n1;
    n1.execute();
    return 0;
}