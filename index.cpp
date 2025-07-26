#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string word;
    cout<<"Enter the word = ";
    cin>>word;
    cout<<endl;
    sort(word.begin(),word.end());
    do{
        cout<<word<<endl;
    }while(next_permutation(word.begin(),word.end()));
    return 0;
}
