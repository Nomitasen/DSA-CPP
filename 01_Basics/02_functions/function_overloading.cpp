#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;

}
int add(int a,int b, int c){
    return a+b+c;
}
int main(){
    cout<<"sum of two numbers: "<< add(5,10)<<endl;
    cout<<"sum of three numbers: "<<add(5,10,20)<<endl;
}