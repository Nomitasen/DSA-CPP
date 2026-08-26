#include <iostream>
using namespace std;

void reversArray(int *start, int *end){
    while(start <end){
    //step 1: swap the values pointed to by start and end 
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
}
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    //function call using pointers
    reversArray(arr,arr+n-1);
    //print reversed array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}