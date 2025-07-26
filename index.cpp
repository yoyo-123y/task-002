#include <iostream>
#include <string>

using namespace std;
int main(){
    string word;
    cout<<"Enter the word = ";
    cin>>word;
    cout<<endl;
    for(int i = word.length();i>=0;i--){
        cout<<word[i];
    }
    cout<<endl;
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
}