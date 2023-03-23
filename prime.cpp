#include<bits/stdc++.h>

using namespace std;

int findsqrt(int n)
{
	if(n == 0 || n== 1)
	{
		return n;
	}
	int l=1,r=n/2,mid,ans;
	while(l<=r)
	{
			mid = ((l+r)/2);
			int sqr = mid * mid;
			if(sqr == n)
			{
				return mid;
			}
			if (sqr <= n)
			{
				l = mid + 1;
				ans = mid;
				
			}
			else
			{
				r = mid-1;
			}
	}
	return ans;	

}
	
int main()
{
	int n;
	cin>>n;
	
	int ans=findsqrt(n);
	int count;
	for(int i=2;i<=ans;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<n<<" is a prime no."<<endl;
	}
	else
	{
		cout<<n<<" is not a prime no."<<endl;
	}
}
