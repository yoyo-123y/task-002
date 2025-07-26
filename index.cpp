#include <iostream>
#include <string>

using namespace std;
int main(){
    string phrase;
    cout<<"Enter the phrase = ";
    getline(cin,phrase);
    cout<<endl;
    int position = phrase.find("dog");
    while(position!= string::npos){
        phrase.replace(position,3,"cat");
        position = phrase.find("dog");
    }
    cout<<"Edited phrase = "<<phrase;
}
