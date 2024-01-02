#include <iostream>

using namespace std;

int main()
{
    int n,insp=1;
    cin>>n;
   for (int i = 0; i <n; i++)
   {
    for (int j =1 ; j<=n-i; j++)
    {
     cout<<"*\t";
    }
    for (int j = 1; j <=insp; j++)
    {
        cout<<"\t";
    }
    for (int j =1 ; j<=n-i; j++)
    {
     cout<<"*\t";
    }
    insp+=2;
    cout<<endl;
    /* code */
   }
   int insi=n+2;
   for (int i = 2; i <=n; i++)
   {
    for (int j =1 ; j<=i; j++)
    {
     cout<<"*\t";
    }
    for (int j = 1; j <=insi; j++)
    {
        cout<<"\t";
    }
    for (int j =1 ; j<=i; j++)
    {
     cout<<"*\t";
    }
    insi-=2;
    cout<<endl;
   }
    return 0;
}