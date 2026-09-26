// write  a program to check wheather a anumber is palindrome or not 
#include<iostream>
using namespace std;
int main ()
{
	int n,digit,rev=0;
	cout<<"Enter the value of n"<< endl;
	cin>>n;
	int temp =n;
	while (n>0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n/=10;
		
	}
	if (rev==temp)
	{
		cout<<"NO .is palindrome "<<endl;
		
		
	}
	else
	{
		cout<<"NO .is not palindrome"<<endl;
		
	}
	return 0;
}
