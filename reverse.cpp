#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,rem,rev;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while(n)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	cout<<"REVERSE OF A NO. " << rev;
}
