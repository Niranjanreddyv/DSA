#include<iostream>
using namespace std;
int main(){
    int arr[13] = {1,2,3,3,3,3,4,5,6,7,9,10,11};
    int n = 13;
    int x = 3;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi + lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1]!=x){
                cout<<mid;
                flag = true;
                break;
            }
            else hi = mid - 1;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;

    }
    if(flag == false){
        cout<<-1;

    }
}