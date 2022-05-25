#include <iostream>
using namespace std;

int main() {
	//code
	long n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	long arr[n];
	for(long i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(long i=n-1;i>=0;i--)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
}
return 0;
}
