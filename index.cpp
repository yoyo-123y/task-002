#include <iostream>
#include <string>

using namespace std;
void BubbleSorting(int arr[]){
    int temp;
    for(int i=0;i<9;i++){
        bool flag=true;
        for(int j = 0;j<9-i;j++){
            if(arr[j]<arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=false;
            }
        }
        if(flag){
            break;
        }
    }
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the element number "<<(i+1)<<" = ";
        cin>>arr[i];
        cout<<endl;
    }
    BubbleSorting(arr);
    cout<<"The largest is "<<arr[0]<<endl;
    cout<<"The second largest is "<<arr[1]<<endl;
    cout<<"The third largest is "<<arr[2]<<endl;

}
