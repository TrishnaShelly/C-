//creating and writing in a new file using ofstream.............
#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ofstream fst("text.txt");
    if(fst.is_open()){
        fst<<"Welcome to File handling"<<endl;
        fst<<"using c plus plus"<<endl;
        fst.close();

    }
    else{
        cout<<"file openong is fail"<<endl;

    }
    return 0;
}