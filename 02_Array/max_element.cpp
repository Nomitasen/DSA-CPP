#include<iostream>
using namespace std;

int main(){
    int arr[5] = {34, 56, 76, 8 , 66};
    int maxVal = arr[0];

    for(int i = 1; i < 5; i ++){
        if (arr[i] > maxVal){
        maxVal = arr[i];
        }
    }
    cout<<"largest element(MxxVal): "<< maxVal<< endl;

    
}