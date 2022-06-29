#include <iostream>
# include <array>
using namespace std;
int main()
{
    array <int,5> data_array;
    array <int ,5> data2={1,2,3,4,5};
    array <char,5> ch;
    cout<<"Enter elements in array:"<<endl;
    for (int i =0;i<5;i++){
        cin>>data_array[i];
    }
    cout<<"you entered"<<endl;
    for (int i =0;i<5;i++){
        cout<<data_array[i]<<" ";
    }
   // cout<<"/n"<<data_array.at[2]<<endl;
    cout<<data_array.front()<<endl;
    cout<<data_array.back()<<endl;
    ch.fill('T');
    cout<<"character array you enterde"<<endl;
    for (int i =0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    data_array.swap(data2);
    cout<<"data array 1 you enterde"<<endl;
    for (int i =0;i<5;i++){
        cout<<data_array[i]<<" ";
    }
    cout<<"second  array you enterde"<<endl;
    for (int i =0;i<5;i++){
        cout<<data2[i]<<" ";
    }
    cout<<"size of first array"<<endl;
    cout<<data_array.size();
}