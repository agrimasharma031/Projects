//Write a program to enter two strings.
 //If the Strings are equal then raise integer exception,
 //if the first string is smaller than other then raise double type exception,
 //otherwise raise character type exception and also display the strings with the exception.


#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class A
{
    char s[10];
    public:
    void in()
        {
            cout<<"Enter the string\n";
            gets(s);
        }
    void show()
        {
            cout<<s<<"\n";
        }
    friend void handle(A,A);
};
    void handle(A a1,A a2)
    {
        int b,p,q;
        double c;
        char d;
        p=strlen(a1.s);
        q=strlen(a2.s);
        try
        {
             if(p==q)
            throw b;
            else if(p<q)
            throw c;
            else
            throw d;
        }
        catch(int b)
        {
             cout<<"both strings are equal\n";

        }
        catch(double c)
        {
             cout<<"first string is less than second string\n";
        }
        catch(char d)
        {
            cout<<"first string is greater than second string\n";

        }
    }
