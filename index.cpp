#include <iostream>
#include <string>

using namespace std;
int main(){
    int arr1[3];
    int arr2[3];
    bool flag=true;
    cout<<"Enter the values for array 1 :"<<endl;
    for(int i = 0;i<3;i++){
        cout<<"Enter element number "<<(i+1)<<" = ";
        cin>>arr1[i];
        cout<<endl;
    }
    cout<<"Enter the values for array 2 :"<<endl;
    for(int i = 0;i<3;i++){
        cout<<"Enter element number "<<(i+1)<<" = ";
        cin>>arr2[i];
        cout<<endl;
    }
    for(int i = 0;i<3;i++){
        if(arr1[i] != arr2[i]){
            flag=false;
        }
    }
    if(flag){
        cout<<"There are no differences";
    }else{
        cout<<"There are differences";
    }
    cout<< endl << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}