#include<iostream>
using namespace std;
//function 
int addNumbers(int a, int b){
    int sum = a + b;
    return sum;
}
int main() {
    int num1 = 10;// variable bna
    int num2 = 20;
    int result = addNumbers(num1 , num2);//The Function Call
    cout<<"The Sum is: "<<result<<endl;
    return 0;
}
