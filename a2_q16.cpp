#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int insi=n+2;
   for (int i = 1; i <=n-1; i++)
   {
    for (int j =1 ; j<=i; j++)
    {
     cout<<j<<"\t";
    }
    for (int j = 1; j <=insi; j++)
    {
        cout<<"\t";
    }
    for (int j =i ; j>=1; j--)
    {
     cout<<j<<"\t";
    }
    insi-=2;
    cout<<endl;
   }
    return 0;
}