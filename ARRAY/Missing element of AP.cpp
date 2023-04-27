#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        int c=(arr[n-1]-arr[0])/n;
        for(int i=0;i<n;i++){
            if(arr[i]+c!=arr[i+1])
                return arr[i]+c;
        }
    }
};
