#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of array"<<n;
	cin>>n;
	int e=1,o=1;
	int a[n];
	int a[0]=1;
	int a[1]=1;
	
	for(int i=2;i<n;i++)
	{
		if(i%2==0)
		{
			a[i]= e * 2;
			e = a[i];
		}
		else
		{
			a[i] = o * 3;
			o = a[i]
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
