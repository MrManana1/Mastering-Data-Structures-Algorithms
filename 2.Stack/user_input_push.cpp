#include<iostream>
using namespace std;

int stack[5];
int top = -1;


void push(int value){
   if(top<4){
    stack[++top]=value;
    cout<<value<<" Pushed to the satck \n";
   }

   else{
    cout<<"Stack is full.Canot push"<<value<<"/n";
   }
}

void display(){
    if(top == -1){
        cout<<"Stack is empty now .\n";

    }

    else{
        cout<<"Stack elements are: ";
        for(int i=0; i<=top; i++){
            cout<<stack[i]<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int value;

    cout<<"Enter up to 5 values to push in to the stack: \n";

    for(int i=0; i<5;i++){
        cout<<"Enter values"<<i+1<<": ";
        cin>>value;
        push(value);
    }

    display();
    
    return 0;
}