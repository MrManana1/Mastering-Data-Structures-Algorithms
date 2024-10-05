#include<iostream>
using namespace std;

int main()
{
  
    // int student_marks [1000] = {20,35,12,50,40,56,20,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,5620,35,12,50,40,56};  
    // cout<<"Marks before update:";
    // cout<<student_marks[1]<<endl;  

    // cout<<"Marks before update:";

    // student_marks [1] = {40};
    // cout<<student_marks[1];

    // cout<<"Array elements are "<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<student_marks[i]<<" ";
    // }
    
    int number [3];

    cout<<"Enter 3 numbers:"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"Numbers"<<(i+1)<<" :";
        cin>>number[i];
    }
    
    cout<<"You enterd the following numbers:"<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<"Numbers"<<(i+1)<<" :"<<number[i]<<endl;
    

    }

    return 0;
}


// create an array of 5 elements in which you have to write your friends names and you have to first print all 
// the name of your friends and then at last you have to print your best friend name with next line
