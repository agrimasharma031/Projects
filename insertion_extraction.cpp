#include<iostream>
using namespace std ;

class Box
{
    double height;
    double width;
    double vol ;

    public :
	friend istream & operator >> (istream &, Box &);
	friend ostream & operator << (ostream &, Box &);
 };

 istream & operator >> (istream &is, Box &b)
 {

	cout << "Enter Box Height: " ;
    cin >> b.height ;
	cout << "Enter Box Width : " ;
    cin >> b.width ;
	return (is) ;
}
ostream & operator << (ostream &os, Box &b)
{
    cout << endl << endl;
	cout << "Box Height : " << b.height << endl ;
	cout << "Box Width  : " << b.width << endl ;

        b.vol = b.height * b.width ;
        cout << "The Volume of Box : " << b.vol << endl;
        return (os) ;
 }

int main()
 {
       Box b1;

       cin >> b1;
       cout << b1;
}
