#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	int *ptr;
	ptr=a;       													 //design address of pointer array
	
	
	cout<<"Access the pointer using pointer subscript"<<endl;
	
	
	for (i=0;i<5;i++)
	cout<<"element of index i=  "<<ptr[i]<<endl;
	
	/*for(i=0;i<n;i++)
	cout<<"element in index i = "<<i<<*(ptr + i);*/
	 
	 for(i=0;i<5;i++)
	cout<<"address of element  i = "<<i<<(ptr + i)<<endl;
	
}
