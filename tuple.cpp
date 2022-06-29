#include<iostream>
#include<tuple>
using namespace std;
int main(){

tuple <string ,int,int> t1;
t1=make_tuple("Trishna",4256,1);
cout<<get<0>(t1)<<' '<<get<1>(t1)<<" "<<get<2>(t1);
}
