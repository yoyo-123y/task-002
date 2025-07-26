#include <iostream>
#include <string>

using namespace std;
int main(){
    int carry=0,sum,binary1,binary2;
    string sBin1,sBin2;
    string result="";
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
    for(int i=sBin1.length()-1;i>=0;i--){
        if(((sBin1[i]=='1')&&(sBin2[i]=='1'))&&carry==1){
            result.insert(0,"1");
        }
        if(((sBin1[i]=='1')&&(sBin2[i]=='1'))&&carry==0){
            result.insert(0,"0");
            carry=1;
        }
        if(((sBin1[i]=='1')||(sBin2[i]=='1'))&&(carry==1)&&(sBin1[i]!=sBin2[i])){
            result.insert(0,"0");
        }
        if(((sBin1[i]=='1')||(sBin2[i]=='1'))&&(carry==0)&&(sBin1[i]!=sBin2[i])){
            result.insert(0,"1");
        }
        if(((sBin1[i]=='0')&&(sBin2[i]=='0'))&&carry==1){
            result.insert(0,"1");
        }
        if(((sBin1[i]=='0')&&(sBin2[i]=='0'))&&carry==0){
            result.insert(0,"0");
        }

    }
    if(carry==1){
        result.insert(0,"1");
    }
    cout<<"The answer is "<<result<<endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}