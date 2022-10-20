#include<iostream>
using namespace std;

class stack{


    private:

    int arr[5];
    int top;
    public:

    stack(){

    top=-1;
    }

    void push(int v){
        if(top==4){
            cout<<"stack is full"<<endl;
        
        }
        else{
            arr[++top]=v;
            cout<<"data pushed sucessfully"<<endl;
        }
    }

    int pop(){
        if(top==-1){
        cout<<"stack empty";
        return 0;
        }
        else
        return arr[top--];
    }
};

int main(){
    stack s;
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    cout<<s.pop();
    return 0;
}