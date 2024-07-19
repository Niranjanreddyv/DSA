#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int lo=0;
    int hi=n;
    string ans = "no";
    while(lo<=hi){
        int mid = lo +(hi - lo)/2;
        if(mid*mid == n){
            ans = "yes";
            break;
        }
        else if(mid*mid>n) hi = mid-1;
        else lo = mid + 1;
    }
    cout<<"is it PerfectSquare ? "<<ans;
}