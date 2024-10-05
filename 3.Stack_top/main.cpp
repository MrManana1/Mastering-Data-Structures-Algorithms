#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> numberstack;

    numberstack.push(12);
    numberstack.push(20);
    numberstack.push(30);
    numberstack.push(60);


    int lastelement = numberstack.top();

    cout<<"Stack Elements: ";
    while(!numberstack.empty()){
        cout<<numberstack.top()<<" ";
        numberstack.pop();
    }
    cout<<endl;

    cout<<"Top of the Element is "<<lastelement;
    
    return 0;
}