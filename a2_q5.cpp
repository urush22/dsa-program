#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0;i <=n+1; i++)
    {for (int j = 0; j <=i; j++)
    {
        if (j>=n+1-i)
        {
            cout<<"*\t";
        }
        else cout<<" \t";
    }   
    cout<<endl;
    }
    for (int i = n;i >=0; i--)
    {for (int j = 0; j <=i; j++)
    {
        if (j>=n+1-i)
        {
            cout<<"*\t";
        }
        else cout<<" \t";
    }   
    cout<<endl;
    }
    return 0;
}