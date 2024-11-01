#include <iostream>
using namespace std;

void findFactors(int);

int main()
{   char replay;//has to be initialized outside of do while since it doesnt exist outside of
    //parameters
    do
    {
    int num;
    cout<< "Give me a whole number that you would like to know all the factors for: ";
    cin>> num;
    cout<< "This number is factorable by : ";
    findFactors(num);
    cout<< "\nWould you like to play again? (y/n)";
    cin.ignore();
    cin.get(replay);
    }
    while(replay=='y'||replay=='Y');
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

