#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main()
{
    string str;

    getline(cin, str);
    cout << str << endl;

    string s1 = "fa";
    string s2 = "mily";
    s1.append(s2);
    cout << s1<<endl;

    cout<<s1.empty()<<endl;

    str.erase(3,3);
    cout<<str<<endl;

    cout<<s2.find("ly")<<endl;

    cout<<s1.length()<<endl;

    string str2="7879";
    int x = stoi(str2);
    cout<<str2<<endl;

    cout<<to_string(x)<<endl;

    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}