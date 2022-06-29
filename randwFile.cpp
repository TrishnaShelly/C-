#include <iostream>
#include<fstream>
using namespace std;
int main(){
    char input[100];
    ofstream os("t.doc");
    cout<<"Goinig to writting into file:"<<endl;
    cout<<"Enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Enter your age:"<<endl;
    cin>>input;
    os<<input<<endl;
    os.close();
    ifstream is("t.doc");
    string str;
    cout<<"Reading from a file"<<endl;
    while(getline(is,str))
    cout<<str<<endl;
    is.close();
    return 0;
}
