#include<iostream>
using namespace std;

int stack[5];
int top = -1;


void push(int value){
    stack[++top]=value;
    cout<<value<<" Pushed.\n";
}


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    return 0;
}