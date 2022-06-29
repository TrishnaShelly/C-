
#include<iostream>
using namespace std;


void factor(int n){
    int spf[100]={0};
    
    for(int i=2;i<=n;i++) 
    spf[i]=i;
     // for(int i=2;i<=n;i++)
   // cout<<spf[i]<<" ";
    for(int i=2;i<=n;i++){
        //cout<<"hellp";
        if(spf[i]==i){
            for(int j = i*i;j<=n;j+=i){
                if(spf[j]==j)
                spf[j]=i;

            }
        }
    }
    //for(int i=2;i<=n;i++)
    //cout<<spf[i]<<" ";
    while(n!=1){
        cout<<spf[n]<<" ";//12=2     6=2     3=3
        n=n/spf[n];
    }
}

int main(){
    int n;
    cin>>n;
    factor(n);
}