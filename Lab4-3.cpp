#include <iostream>
using namespace std;

int main()
{
	int i, n, fact;
	fact = 1;
	cout<<"Enter a positive integer for factorial: ";
	cin>>n;
	
	if(n>=0)
	{
	
	for(i=1; i<=n; i++)
	{
		fact*=i;
	}
	cout<<n<<"! = "<<fact<<endl;
    }
    else 
    {
    	cout<<"The integer entered is negative, hence its factorial does not exist.";
	}
	return 0;
}
