#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&b)
{
	cout<<"\nAfter SELECTION SORT\n";
	for(auto i:b)
	{
		cout<<i<<" ";
	}
}

int selectionsort(vector<int>&a)
{
	int i,j,min,t;
	for(i=0;i<a.size();i++)
	{
		min = i;
		for(j=i+1;j<a.size();j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min] =t;
	}
	
	display(a);
}

int main()
{
	vector<int>b;
	int n,t;
	cout<<"Enter the no. element:\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		b.push_back(t);
	}
	cout<<"BEFORE SORTING\n";
	for(auto j:b)
	{
		cout<<j<<" ";
	}
	
	selectionsort(b);
}
