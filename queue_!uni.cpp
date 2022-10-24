#include<iostream>
using namespace std;

#define n 5

class queue{

    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int v){
        if(back==n-1){
            cout<<"queue qverflow"<<endl;
            return;
        }
        back++;
        arr[back]=v;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
           cout<<"no elements in queue"<<endl;
           return -1;
        }
        return false;
    }
};

int main(){
    queue s;
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();

    cout<<s.empty()<<endl;

    return 0;
}