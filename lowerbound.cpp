#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 18;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
            cout<<"lower bound : "<<arr[mid - 1]; // for upper bound replace - with +
            flag = true;
            break;
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false){
        cout<<"lower bond : "<<arr[hi]; // for upper bound replace hi with lo
    }
}