#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i <=n/2 +1; i++){
        for (int j = 1; j <=n; j++)
    {
        if(i==1){
            cout<<"*\t";
        }
        else if (i==j||j+i==n+1)
        {
            cout<<"*\t";
        }
        else cout<<"\t";
    }
    cout<<endl;
    }
    for(int i=n/2+2;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j>=n-i+1){
                cout<<"*\t";
            }
            else cout<<"\t";
    }
    cout<<endl;
    }
return 0;
}