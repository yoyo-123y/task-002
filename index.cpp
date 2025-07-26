#include <iostream>
#include <string>

using namespace std;
int main(){
    int carry,sum,binary1,binary2;
    string sBin1,sBin2;
    cout<<"Enter the first binary number = ";
    cin>>binary1;
    cout<<endl<<"Enter the second binary number = ";
    cin>>binary2;
    cout<<endl;
    sBin1=to_string(binary1);
    sBin2=to_string(binary2);
    cout<<sBin1<<" "<<sBin2<<endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}