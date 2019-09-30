#include <iostream>
using namespace std;

void decToBinary()
{
    int binaryNum[32];
    public :
        int n ;

        decToBinary()                   //default constructor
        {
            n=17 ;
        }

        decToBinary(int x)              //parameterized constructor
        {
            x=n ;
        }

        decToBinary(decToBinary &D)      //copy constructor
        {
            n = D.n ;
        }
        int i = 0;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;

    }

    void show()
        {
                cout<<"Binary form is "<<d.n ;
        }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
} d;

int main()
{
    decToBinary D1 ;
    D1.show() ;
    decToBinary D2(5) ;
    D2.show() ;
    int a ;
    cout<<"Enter the number to convert into Binary :" ;
    cin>>a;
    decToBinary D3(n) ;
    D3.show();
    decToBinary D4(decToBinary);
    D4.show() ;

    return 0;
}
