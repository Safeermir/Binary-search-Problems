//Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
//maximum number of 1’s.
#include<iostream>
#include<vector>
using namespace std;
int NoofOnes(vector <int>& v){
    int target=1;
     int hi=v.size()-1;// Initializing two pointers
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
     return v.size()-idx; // As we get first occurance then after that all are one (sorted)

}

int main(){
    vector<vector<int>> matrix = {
        {0, 0, 0, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}
    };
    int maxone=0;
    int row=-1;
    for(int i=0;i<matrix.size();i++){
        int number=NoofOnes(matrix[i]);// calculating number of 1's using above function
        if(number>maxone){
            maxone=number;  // Checking which row has maximum 1,s
            row=i;
        }
    }
    cout<<"Maximum number of one is : "<<maxone<<" and is in row : "<<row;
     return 0;

}