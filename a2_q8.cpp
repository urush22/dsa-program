#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = n; i >= 0; i--)
    {for (int j = 0; j <= i; j++)
    {
        if (j>=i)
        {
            cout<<"*\t";
            /* code */
        }
        else{cout<<" \t";}
        
        /* code */
    }
    cout<<endl;
    }
    return 0;
}