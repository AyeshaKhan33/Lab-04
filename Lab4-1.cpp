#include <iostream>
using namespace std;

int main()
{
	int i, sum, sum2;
	sum = 0;
	sum2 = 0;
	
	cout<<"Enter the numbers for sum one by one: "<<endl;
	for(i=0; i<10;i++)
	{
		cin>>sum;
		sum2+= sum;
	}
	cout<<"The sum of the 10 natural numbers is: "<<sum2<<endl;
	
	return 0;
}
