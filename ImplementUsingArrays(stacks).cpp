#include<bits/stdc++.h>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack underflow";
        }

    }
    int peek(){
        if(top >= 0 ){
            return(arr[top]);
        }
        return -1;

    }


    bool is_empty(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        return false;

    }

};
int main(){
    stack s(5);
    s.push(22);
    s.push(43);
    s.push(45);
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.top()<<endl;


}
