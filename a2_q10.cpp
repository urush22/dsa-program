#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {for (int j = 1; j <=n; j++)
    {
        if (i+j==(n+3)/2||j-i==(n-1)/2)
        {
            cout<<"*\t";
        }
        else cout<<"\t";
    }
    cout<<endl;
    }
    for (int i = n/2; i >=1 ; i--)
    {for (int j = 1; j <=n; j++)
    {
        if (i+j==(n+3)/2||j-i==(n-1)/2)
        {
            cout<<"*\t";
        }
        else cout<<"\t";
    }
    cout<<endl;
    }
    return 1;
}

