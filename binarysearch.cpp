#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int target = 3;
    int n = 9;
    int lo = 0;
    int hi = n - 1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == target) {
            cout<<mid;
            break;
        }
        else if(arr[mid]>target) hi = mid - 1;
        else{
            // if(arr[mid]<target) lo = mid + 1
            lo = mid + 1;
        }
    }

}