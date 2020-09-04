#include<bits/stdc++.h>
using namespace std;

int find(long long int arr[],long long int n)
{
 // Sort the array 
    sort(arr, arr + n); 
  
    // find the min frequency using linear traversal 
    long long int min_count = n+1, res = -1, curr_count = 1; 
    for (long long int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
                if(curr_count%2!=0)
                res = arr[i - 1]; 
                break;
            } 
            curr_count = 1; 
        }  
   
    // If last element is least frequent 
    if (curr_count%2!=0) 
    { 
        res = arr[n - 1]; 
    } 
  
    return res; 
}  
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,p,q,i;
        cin>>n;
        long long int x=(4*n)-1;
        long long int a[x],b[x];
        for(i=0;i<x;i++)
        cin>>a[i]>>b[i];
        p=find(a,x);
        q=find(b,x);
        cout<<p<<" "<<q<<"\n";
    }
    return 0;
}
