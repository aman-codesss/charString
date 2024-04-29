#include<iostream>
using namespace std;
void rev(char name[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
cout<<"The reversed: "<<name;
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
    rev(name,size);

}