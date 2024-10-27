//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
//inclusive in sorted order.
//There is only one repeated number in nums, return this repeated number.
#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(const vector<int>& nums) {
    int left = 1, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        int count = 0;
        
        // Count numbers less than or equal to mid
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }
        
        // If count is greater than mid, the duplicate is in the left half
        if (count > mid) {
            right = mid;
        } else {  // Otherwise, it's in the right half
            left = mid + 1;
        }
    }
    
    return left;  // The duplicate number
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n+1<<" elements of the array (In sorted order): ";
    for(int i=0;i<=n;i++){ // Taking input from user 
        int x;     
        cin>>x;
        v.push_back(x);
    }
     cout<<"Duplicate is :"<<findDuplicate(v);
     return 0;

}



