#include<iostream>
using namespace std;
int sq(int n){
    int lo = 0;
    int hi = n;
    while(lo<=hi){
         int mid = lo + (hi - lo)/2;
         if(mid*mid == n) return mid;
         else if(mid*mid > n) hi = mid - 1;
         else lo = mid + 1; 
    }
    return hi;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int m = sq(n);
    cout<<"Square Root of "<<n<<" is "<<m;
}