//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
// 	    map<long long,int> mpp;
// 	    for(int i=0;i<N;i++)
// 	    {
// 	        mpp[A[i]]++;
// 	    }
// 	    for(auto i:mpp)
// 	    {
// 	        if(i.second==1)
// 	        {
// 	            return i.first;
// 	        }
// 	    }
        
        int x=0;
        for(int i=0;i<N;i++)
        {
            x=x^A[i];
        }
        return x;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends