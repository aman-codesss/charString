#include<iostream>
#include<string>
using namespace std;
string reverseWord(string str){
int s =0;
int e= str.size()-1;
while(s<=e){
    swap(str[s++],str[e--]);
}
return str;
}

void reverseString(string s){
    string temp ="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ' ){
            temp.push_back(s[i]);
        }
        else{
            cout<<reverseWord(temp)<<" ";
            temp ="";
        }
        
    }//printing the last word
    cout<<reverseWord(temp);
   
}
int main(){
    string s = "My name is Aman and I am reversing a string";
    reverseString(s);
}