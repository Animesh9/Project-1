#include<iostream>
#include<conio.h>
int main()
{
	int a,b,x;
	cout<<"enter first number ";
	cin>>a;
	cout<<"Enter second number ";
	cin>>b;
	cout<<"Press to :-\n1)Add\n2)Subtract\n3)Multiply\n4)Divide"; 
	cin>> x;
	switch(x)
	{
		case 1:
			cout<<"The Sum is "<<a+b;
			break;
		case 2:
			cout<<"The Difference is "<<a-b;
			break;
		case 3:
			cout<<"The Product is "<<a*b;
			break;
		case 4:
			cout<<"The Quotient is "<<a/b;
			break;
		default:
			cout<<"Error! Enter a number between 1 to 4";
	}

