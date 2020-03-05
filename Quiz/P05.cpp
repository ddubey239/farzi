#include<iostream>
#include<set>

using namespace std;

void function(int A[], int B[], int n, int m)
{
    set<int> s1, s2;
	for(int i=0; i<m; i++)
	{
	    s1.insert(B[i]);
		s2.insert(B[i]);	
	}
	int length = INT_MAX, start_index=-1, end_index;
	for(int i=0; i<n; i++)
	{
		if(s1.find(A[i])!=s1.end())
		{
			s2.erase(A[i]);
			for(int j=i+1; j<n; j++)
			{
				if(s2.find(A[j])!=s2.end())
				{
					s2.erase(A[j]);
				}
				if(s2.empty()&&j-i+1<length)
		        {
			        start_index = i;
			        end_index = j;
			        length = j-i+1;
		        }
			}
		}
		s2 = s1;
	}
	if(start_index>0)
	{
		cout<<start_index<<' '<<end_index;
	}
	else 
	{
		cout<<"Not Possible";
	}
}
int main()
{
	int n, m;
	cin>>n>>m;
	int A[n], B[m];
	
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	for(int j=0; j<m; j++)
	{
		cin>>B[j];
	}
	function(A,B,n,m);
	
	return 0;
}
