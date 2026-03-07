#include<iostream>
using namespace std;

int main ()
{
	int a=10 , b=5;
	cout<<"Logical Operatror\n";
	
	if(a>5&&b>2) 
	{
	cout<<"Both condition are true using && operator\n";
    }
    
    if(a>20 || b>2)
    
    {
    	cout<<" At least one condition is true\n";
	}
	
	if(!(a==b))
	{
		cout<<"a is not equal to b using ! operator\n";
	}
	
	cout<<"Unary operator\n";
	
	int x=10;
	cout<<"Pre-increment(++x):"<<++x<<endl;
	cout<<"Post-decrement(x++):"<<x++<<endl;
	cout<<"Pre-increment(--x):"<<--x<<endl;
	cout<<"Post-decrement(x--):"<<x--<<endl;
	
	cout<<"Value after post-decrement:"<<x<<endl;
	
	cout<<"\n Ternary operator\n";
	
	int num1=15 , num2=20;
	int max=(num1>num2)?num1:num2;
	
	cout<<"Maximum number is:"<<max<<endl;
	
	return 0;
}
