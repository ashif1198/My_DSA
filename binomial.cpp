#include<bits/stdc++.h>

using namespace std;


void binomial(int n, int k)
{
	int ans=1;
	if(k>n-k)
	{
		k = n-k;
	}
	for(int i=0;i<k;i++)
	{
		ans = ans * (n-i);
		ans = ans/(i+1);
	}
	cout<<"RESULT "<<ans;
}
int main()
{
	int n,k;
	cout<<"Enter the value of n & k "<<endl;
	cin>>n>>k;
	
	binomial(n,k);
}
