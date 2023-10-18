#include <iostream>
using namespace std;

int main()
{
	int n1 = 0;
	int n2 = 1;
	int n3, i, num;
	
	cout<<"Enter the number of elements for the Fibonacci sequence: ";
	cin>>num;
	
	cout<<"The Fibonacci sequence is:"<<endl;
	cout<<n1<<", "<<n2;
	
	for(i = 2; i<num; i++)
	{
		n3 = n1 + n2;
		cout<<", "<<n3;
		n1 = n2;
		n2 = n3;
	}
	return 0;
}
