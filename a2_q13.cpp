#include<iostream>
using namespace std;
int fact(int b){
    if (b==0){
        return 1;
    }
    else {return b *fact(b-1);}
}
int combin(int a, int k){
    return fact(a)/(fact(k)*fact(a-k));
}
int main(){
    int n; 
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                cout<<1<<"\t";}
           else {cout<<combin(i,j)<<"\t";}
        }
        cout<<endl;
    }
    return 0;
}