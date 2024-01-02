#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x;//jis ki table chahiye
    cin>>n;//jha tak chahiye table ko
    for (int i = 1; i <=n ; i++)
    {
        cout<<(x)<< " X "<<(i)<<" = "<< x * i;
        cout<<endl;
    }
 return 0;   
}