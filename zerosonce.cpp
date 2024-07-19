#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    int pivot = 0;
    while(lo<=hi){
        if(arr[0]==1){
            break;
        }
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == 0){
            if(arr[mid+1]!=0){
                pivot = mid;
                break;
            }
            else{
                lo = mid + 1;
            }
        }
        else{
            hi = mid - 1;
        }
    }

    if(arr[0]==1){
        cout<<n;
    }else{
        cout<<(n - pivot -1);
    }
}