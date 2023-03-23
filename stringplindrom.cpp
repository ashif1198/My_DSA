#include<bits/stdc++.h>

using namespace std;
int isPalindrome(string S)
{
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
 
int main()
{
	string s1;
	cout<<"Enter the string"<<endl;
	getline(cin,s1);
	int j=0,c=0;
	int a[3],k=0;
	for(int i=1;i<s1.size();i++)
	{
		if(s1[j]==s1[i])
		{
				if(isPalindrome(s1.substr(j,i+1)))
				{
					c=c+1;
					a[k++]=i;
					j=i+1;
					i++;
				}
				else
				{
					cout<<"Impossible1"<<endl;
					break;
				}
				
		}
		else
		{
			continue;
		}
	}
	if(c==3)
	{
		cout<<s1.substr(0,a[0]+1)<<" "<<s1.substr(a[0]+1,a[1]+1)<<" "<<s1.substr(a[1],a[2]);
	}
	else
	{
		cout<<"Impossible3"<<endl;
	}
}
