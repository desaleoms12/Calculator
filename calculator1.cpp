#include<iostream>
using namespace std;

 //functions for operation

//function to add two numbers similarly wee can make for every operation
 float sum(float a, float b)
 {
     return(a+b);
 }

//function to subract two numbers;
 float subtract(float c, float d)
 {
     return(c-d);
 }
//function for multiplication
 float mul(float e , float f)
 {
     return (e*f);
 }
//function for divison
 float divide(float h, float j)
 {
     return (h/j);
 }
int main()
{
    float num1,num2;
    char o;
    cout<<"Enter the First Numbers\n";
    cin>>num1;
    cout<<"Enter the second Numbers\n";
    cin>>num2;
    cout<<"Enter the Operation\n";
    cin>>o;

    //using switch statment

    switch (o)
    {
        //case for addition

    case '+':
    cout<<"The sum is : "<<sum(num1,num2);//call to function lets write for every opertion
        break;
    
    case '-':
    cout<<"The diff is : "<<subtract(num1,num2);
    break;

    case '*':
    cout<<"The Product  is : "<<mul(num1,num2);
    break;

    case '/':
    cout<<"The Quotient is : "<<divide(num1,num2);
    break;//break is neccesary after each case lets check the program once
    
    default: 
    cout<<"Invalid Statement";//this is the default statement
        break;
    }
    
//lets run it....
//This was the program to how to make basic calculator using functions in C++..
//thanks for watching like and Suscribe
return 0;
}