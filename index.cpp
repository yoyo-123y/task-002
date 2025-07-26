#include <iostream>
#include <string>

using namespace std;
void swapNumbers(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int num1;
    int num2;
    cout<<"Enter the first number = ";
    cin>>num1;
    cout<<endl;
    cout<<"Enter the second number = ";
    cin>>num2;
    cout<<endl;
    swapNumbers(num1,num2);
    cout<<"The first number is "<<num1<<endl;
    cout<<"The second number is "<<num2<<endl;
}