#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main(){
    int arr1[6];
    int searchKey;
    bool flag=false;
    cout<<"Enter the values for array ordered :"<<endl;
    for(int i = 0;i<6;i++){
        cout<<"Enter element number "<<(i+1)<<" = ";
        cin>>arr1[i];
        cout<<endl;
    }
    cout<<"Enter the search key = ";
    cin>>searchKey;
    cout<<endl;
    int start=0;
    int end=5;
    int middle=(start+end)/2;
    while(end>=start&&flag==false){
        middle=(start+end)/2;
        if(arr1[middle]==searchKey){
            flag=true;
        }else{
            if(arr1[middle]>searchKey){
                end=middle-1;
            }else{
                start=middle+1;
            }
        }
    }
    if(flag){
        cout<<"found the value"<<endl;
    }else{
        cout<<"Didn't found the value"<<endl;
    }
}
