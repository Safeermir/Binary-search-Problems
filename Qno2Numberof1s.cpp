//Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n<<" elements of binary(0,1) array (In sorted order): ";
    for(int i=0;i<n;i++){ // Taking input from user 
        int x;     
        cin>>x;
        v.push_back(x);
    }
    int target=1;
     int hi=n-1;// Initializing two pointers
     int lo=0;
     bool flag=false;
     int idx=-1;
     while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==target) {         // Finding first index of 1 
            if(v[mid-1]!=target){
                idx=mid;
                flag=true;
                break; 
            }
            else{ // v[mid-1]==target;
                 hi=mid-1;
            }
        }
        else if (v[mid]<target) lo=mid+1;
        else hi=mid-1;
     }
     cout<<"Total number of 1's are: "<<n-idx;  // when we get firt occurance then after that all are 1 (As sorted)

     return 0;

}