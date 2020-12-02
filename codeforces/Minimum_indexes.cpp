#include<iostream>

using namespace std;

int sumd(int x)
{
    int rem,sum;
    sum=0;
    while(x!=0)
    {
       rem=x%10;
       x=x/10;
       sum=sum+rem; 
    }
    return sum;
}

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(q--)
    {
        int i;
        cin>>i;
        if(i==n)
        {
            cout<<"-1\n";
            continue;
        }
        i=i-1;
        int j=i+1;
        while(j<n)
        {
            if(sumd(a[i])>sumd(a[j]) && a[i]<a[j])
            {
                cout<<j+1<<"\n";
                break;
            }
            if(j==n-1 && (sumd(a[i])<sumd(a[j]) || a[i]>a[j]))
            cout<<"-1\n";
            j++;

        }
    }
    return 0;
}