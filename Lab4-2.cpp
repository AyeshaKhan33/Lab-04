#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	cout<<"Enter the number whose table is required: ";
	cin>>j;
	cout<<"Enter the number till which the table is required: ";
	cin>>n;
	
	for(i=1; i<=n;i++)
	{
		cout<<j<<" x "<<i<<" = "<<j*i<<endl;
	}
	return 0;
}
