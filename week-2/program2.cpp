using namespace std;

void check(int A[],int n)
{
	bool result = true;
	for(int i=0; i<n-1; i++)
	{
		if(A[i]>A[i+1])
		{
			 result = false;
			 break;
		}
	}
	cout<<endl;
	if(result==true) cout<<"true";
	else cout<<"false";
}

