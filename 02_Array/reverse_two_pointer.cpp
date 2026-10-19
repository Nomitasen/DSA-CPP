#include<iostream>
using namespace std ;
int main(){
    int arr[5]= {10 , 20 , 30 , 40 , 50};
    int start= 0;
    int end = 4;

    while(start < end) {
        swap(arr[start], arr[end]); // Shuru aur aakhri wale ko badlo
        start++;                    // Aage badho
        end--;                      // Peeche aao
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}