 //Write a program to enter two strings.
 //If the Strings are equal then raise integer exception,
 //if the first string is smaller than other then raise double type exception,
 //otherwise raise character type exception and also display the strings with the exception.

#include<iostream>
using namespace std ;
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char str1[100], str2[100];
	cout<<"Enter first string : ";
	cin.getline(str1,100);
    cout<<"Enter second string : ";
	cin.getline(str2,100);

	try
	{
	if(strcmp(str1, str2)==0)
	{
		throw 10 ;
	}
	else if(strcmp(str1,str2)<0)
	{
		throw 10.00 ;
	}
	else if(strcmp(str1,str2)>0)
	{
		throw 'c' ;
	}

	}
	catch(int n)
	{
            cout<<"\nBoth the strings are equal\nInteger Exception\n";
            puts(str1) ;
            puts(str2) ;
    }
    catch(double d)
	{
            cout<<"\nString 1 is smaller than String 2\nDouble Exception\n";
            puts(str1) ;
            puts(str2) ;
    }
    catch(char c)
	{
            cout<<"\nString 2 is smaller than String 1\nCharacter Exception\n";
            puts(str1) ;
            puts(str2) ;
    }

    return 0 ;
}
