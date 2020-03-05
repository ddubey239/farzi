#include<iostream>
#include<set>

using namespace std;

int main()
{
	int n, m, sumA=0, sumB=0, x=INT_MIN, y=INT_MIN;
	cout<<"Enter the size of both Arrays"<<endl;
	cin>>n>>m;
	int A[n],B[m];
	set<int> s;
	cout<<"Enter elements of first array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
		sumA+=A[i];
		s.insert(A[i]);
	}
	cout<<"Enter elements of second array"<<endl;
	for(int i=0; i<m; i++)
	{
		cin>>B[i];
		sumB+=B[i];
	}
	int diff = (sumA-sumB)/2;
	for(int i=0; i<m; i++)
	{
		int temp = diff+B[i];
		if(s.find(temp)!=s.end())
		{
			x = temp;
			y = B[i];
			break;
		}
	}
	if(x>INT_MIN)
	{
		cout<<"Required pair is-: {"<<x<<","<<y<<"}";
	}
	else 
	{
		cout<<"Not Possible";
	}
	
	return 0;
}
