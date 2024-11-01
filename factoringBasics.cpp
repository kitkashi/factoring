#include <iostream>
using namespace std;

void findFactors(int);

int main()
{
    int num;
    cout<< "Give me a whole number that you would like to know all the factors for: ";
    cin>> num;
    cout<< "This number is factorable by : ";
    findFactors(num);
}

void findFactors(int num)
{
    int factorable;
    for (int factor=1;factor<=num;factor++)
        {
        int factorable=num % factor;
        if (factorable==0) 
        cout<< factor << " " ;
        }

}

