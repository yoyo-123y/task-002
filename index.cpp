#include <iostream>
#include <string>

using namespace std;
int main(){
    int arr1[3];
    int arr2[3];
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
    
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}