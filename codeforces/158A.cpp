#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&& a[i]>0)
        c++;
   }
   cout<<c;
  return 0;
}
