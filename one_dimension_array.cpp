#include<iostream>
using namespace std;

int main(){
    int arr[50],n,idx;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    cout<<"array elemnt af arr:"<<endl;
    for(idx=0;idx<n;idx++){
        cin>>arr[idx];

    }
    for(idx=0;idx<n;idx++){
        cout<<arr[idx]<<" ";
    }
    return 0;
}