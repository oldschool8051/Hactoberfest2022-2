#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the year:";
	cin>>n;
	if((n%4==0 && n%400==0) || n%100==0)
	cout<<n<<" is Leap Year"<<endl;
	else
	cout<<n<<" is not Leap year"<<endl;
}
