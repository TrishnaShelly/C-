#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    while (1)
    {
        cout<<"hello while";
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            cout<<"hello if one"<<" ";
            if (currLen > maxLen)
            {
                cout<<"hello if two";
                maxLen = currLen;
            }
            currLen = 0;
        }
        else
        {
            cout<<"hello else";
            currLen++;
            cout<<currLen<<" ";
        }
        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << maxLen;
    return 0;
}