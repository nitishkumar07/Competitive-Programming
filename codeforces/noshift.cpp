#include<bits/stdc++.h>
using namespace std;
void display(int a[][3], int c);
bool finish(int a[][3]);

int main()
{
    srand(time(NULL));
    int i,j,x,k;
    int a[3][3];
    int c=100;
    int b[8]={1,2,3,4,5,6,7,8};
    k=7;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  
            if(k==0)
            a[i][j]=b[0];
            else if(k>0)
            {
                x=rand()%k;
                a[i][j]=b[x];
                b[x]=b[k];
                k--;
            }
        }
     }
     a[2][2]=0;
     int p1,p2;
     p1=2;p2=2;
     display(a,c);
     
     for(i=1;i<=c;i++)
     {
        if(finish(a))
        {
            cout<<"YOU WIN !!!\n";
            exit(0);
        }
        else if(c-i==0)
        {
            cout<<"YOU LOSE\n";
            exit(0);
        }
        else
        {
            char ch;
            cin>>ch;
            if(ch!=a && ch!=w && ch!=d && ch!=s)
            {
                i--;
                continue;
            }
            else
            {
                process(*a[][j],ch);
                display(a,c-i);
            }
         }
      }

    return 0;
}

bool finish(int a[][3])
{
    int b[3][3]={1,2,3,4,5,6,7,8,0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
            return false;
        }
    }
    return true;
}

void display(int a[][3], int c)
{
    cout<<"Steps left : "<<c<<"\n";
    cout<<"-------------\n";
    for(int i=0;i<3;i++)
    {
        cout<<"| ";
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==0)
            cout<<"  | ";
            else
            cout<<a[i][j]<<" | ";
        }
        cout<<"\n";
        cout<<"-------------\n";
    }
}
     
     
