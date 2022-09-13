// for this approach array should e in sorted  order 

#include <iostream>
using namespace std;

bool pairSum(int arr[],int n , int k ){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+ arr[high] == k)
        {
            cout<<low<<" "<<high;
            return true;
        }
        else if (arr[low]+arr[high]>k ){
            high--;
        }else{
            low++;
        }
    }
    return false;
}

int main()
{   
    int arr[] ={2,4,7,11,14,16,20,21};
    int k =31;
    pairSum(arr,8,k);
    return 0;
}