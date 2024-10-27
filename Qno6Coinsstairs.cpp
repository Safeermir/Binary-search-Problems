//You have n coins and you want to build a staircase with these coins. The staircase consists of k
//rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
//Given the integer n, return the number of complete rows of the staircase you will build.
#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    long lo=0,hi=n;
    
    while(lo<=hi) {
        long mid=lo+(hi-lo)/2;
        long currentSum=mid*(mid+1)/2;
        
        if (currentSum==n) {
            return mid;  
        } else if (currentSum<n) {
            lo=mid+1;  
        } else {
            hi=mid-1; 
        }
    }
    
    return lo; 
}
int main() {
    int n;
    cout<<"Enter the number of coins: ";
    cin>>n;
    cout<<"Number of complete rows: "<<arrangeCoins(n)<<endl;
    return 0;
}
