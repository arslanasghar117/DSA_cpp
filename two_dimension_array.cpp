#include<iostream>
using namespace std;

int main(){
    int arr[3][2];
    cout<<"array elemnt af arr:"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<2;col++){
        cin>>arr[row][col];

        }

    }
    cout<<"array elemnt in arr:"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<2;col++){
        cout<<arr[row][col]<<" ";

        }
    }
    return 0;
}