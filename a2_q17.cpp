#include<iostream>
using namespace std;
int main(){
    int n; 
    int st=1;
    cin>>n;
    int sp=n/2;
    for(int i=1;i <=n ;i++){
        if( i== n/2 +1 ){
                cout<<"*\t";
            }
            else {cout<<"\t";
        } 
        for  (int j=1 ; j<=sp ; j++){
          
        }
        for(int j=1;j<=st;j++){
            cout<<"*\t";
        }
        if(i<=n/2){
            st++;
        }
        else{
            st--;
        }
        cout<<endl;
    }
    return 0;
}