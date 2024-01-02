#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sp= n/2;
    int st=1;
    int h=1;
    for (int i = 1;i <=n; i++)
    {for (int j = 1; j <=sp; j++)
    {
        cout<<"\t";
    } 
    int k=h;  
    for (int j = 1; j <=st; j++)
    {
        cout<<k<<"\t";
        if(j<=st/2){k++;}
        else k--;
    }   
    if(i<=n/2){
        sp--;
        st+=2;
        h++;
    }
    else {
        sp++;
        st-=2;
        h--;
    }
    cout<<endl;
    }
    return 0;
}