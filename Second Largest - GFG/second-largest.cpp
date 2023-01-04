//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int large=-1;
	    int secondLarge=-1;
	   if(n<2)
	   return -1;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>large)
	       {
	           secondLarge=large;
	           large=arr[i];
	       }
	       else if(arr[i]>secondLarge and arr[i]!=large)
	       {
	           secondLarge=arr[i];
	       }
	      
	   }
	   return secondLarge;
	   //int smax = -1, maxi = -1;
	   // for(int i = 0; i<n; i++){
	   //     if(arr[i]>maxi){
	   //         smax = maxi;
	   //         maxi = arr[i];
	   //     }
	        
	   //     else if(arr[i]>smax && arr[i]!=maxi) smax = arr[i];
	   // }
	    
	   // return smax;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends