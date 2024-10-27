//Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
//does not exist return -1.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n<<" elements of the array (In sorted order): ";
    for(int i=0;i<n;i++){ // Taking input from user 
        int x;     
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"Enter the element to be search: ";
    cin>>target;
     int hi=n-1;// Initializing two pointers
     int lo=0;
     bool flag=false;
     int idx=-1;
     while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==target) {     
            if(v[mid+1]!=target){
                idx=mid;
                flag=true;
                break; 
            }
            else{ // v[mid+1]==target;
                 lo=mid+1;
            }
        }
        else if (v[mid]<target) lo=mid+1;
        else hi=mid-1;
     }
     if(flag==true){
        cout<<" Last Occurance of Element "<<v[idx]<< " is  at index : "<<idx;;
     }
     return 0;
}