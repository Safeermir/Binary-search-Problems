//Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
#include<iostream>
using namespace std;
int main(){
    long long x;
    cout<<"Enter the number : ";
    cin>>x;
    long long lo=0;
    long long hi=x;
    bool flag=true;
    long long ans;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(mid*mid==x ){
            flag=false;
            cout<<"Perfect square";
            break;
        }
        else if(mid*mid>x){
            hi=mid-1;

        }
        else lo=mid+1;
    }
    if (flag==true){
        cout<<"Not Perfect square";
    }

    
    }
