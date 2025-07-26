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
    if(sBin1.length()>sBin2.length()){
        for(int i = sBin2.length();i<sBin1.length();i++){
            sBin2.insert(0,"0");
        }
    }else{
        for(int i = sBin1.length();i<sBin2.length();i++){
            sBin1.insert(0,"0");
        }
    }
    cout<<sBin1<<" "<<sBin2<<endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}