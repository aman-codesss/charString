#include<iostream>
using namespace std;
bool checkPali(char name[],int n){
int s=0,e=n-1;
while(s<=e){

if(name[s++]!=name[e--]){
    return false;
}else{
    s++;
    e--;
}
}
return true;
}
int getSize(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;
    int size = getSize(name);
    cout<<"palindrom or not: "<<checkPali(name,size);

}