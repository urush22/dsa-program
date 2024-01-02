#include <iostream>
using namespace std;
int fibo(int num)
{
    if (num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else 
    {
        return (fibo(num - 1)+fibo(num-2)); 
    }   
}
int main(){
    int n,h=0;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {for (int j = 1; j <=i ; j++)
    {
        cout<<fibo(h)<<"\t";
        h+=1;
    }
    cout<<endl;
    }
    return 0;
}