#include<string>
#include<iostream>
using namespace std;


    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
int main(){
    string part ="the";
    string s = "the tallest mountain of the world is the mount everest.";
    cout<<removeOccurrences(s,part);

}