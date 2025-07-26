#include <iostream>
#include <string>

using namespace std;
int main(){
    int arr1[6];
    bool flag=true;
    cout<<"Enter the values for array ordered :"<<endl;
    for(int i = 0;i<6;i++){
        cout<<"Enter element number "<<(i+1)<<" = ";
        cin>>arr1[i];
        cout<<endl;
    }
    for(int i = 0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}