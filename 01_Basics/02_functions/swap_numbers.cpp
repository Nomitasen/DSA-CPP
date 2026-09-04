#include<iostream>
using namespace std;
// '&' lagane se Pass by Reference ho raha hai
// Ab 'a' aur 'b' original variables ko directly point kar rahe hain
void swapNumbers(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10;
    int y = 20;
    cout<<"Before swaping: x = "<< x <<",y = "<<y<<endl;
    // Function call
    swapNumbers(x, y);
    
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    
    return 0;
}

