#include<iostream>
using namespace std;

int gcd(int a,int b){
    do{
        int rem=a%b;
        a=b;
        b=rem;
    }while(b!=0);
    return a;
}
int main(){
    int c,d;
    cin>>c>>d;
    cout<<gcd(c,d);
    return 0;
}