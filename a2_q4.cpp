#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = n; i >=0; i--)
    {for (int j = 0; j <=n; j++)
    {
        if (j>=n-i)
        {
            cout<<"*\t";
            /* code */
        }
        else cout<<" \t";
    }
    cout<<endl;
        /* code */
    }
    return 0;
}