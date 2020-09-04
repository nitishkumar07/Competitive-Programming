#include<bits/stdc++.h>
using namespace std;

int find(long long int arr[],long long int n)
{
 // Sort the array 
    sort(arr, arr + n); 
  
 int i,j,res;
 for(i=0;i<n;i=i+2)
 {
    if(arr[i]!=arr[i+1])
    {
        res=arr[i];
        break;
     }
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
