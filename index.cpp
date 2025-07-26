#include <iostream>
#include <string>

using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the element number "<<(i+1)<<" = ";
        cin>>arr[i];
        cout<<endl;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;

}
