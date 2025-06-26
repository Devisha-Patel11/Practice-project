#include<iostream>
using namespace std;
int main(){
    int a,arm,n,c;
    cout<<"The armstrong numbers from 1 to 1000 : ";
    for (int i=1;i<=1000;i++){  // Step 1: Loop from 1 to 1000
        c=i;    // Step 2: Store the original number
        arm=0;  // Step 3: Reset arm to 0 for each new number
        a=i;    // Step 4: Use a temporary variable to extract digits
    while(a>0)  // Step 5: Extract digits one by one
    {
        n=a%10; // Step 6: Get the last digit of temp
        arm=(n*n*n)+arm;// Step 7: Add the cube of the digit to arm
        a=a/10; // Step 8: Remove the last digit from temp
    }
    if(c==arm)  // Step 9: Check if the sum of cubes equals the original number
    cout<<c<<" ";   // Step 10: Print the Armstrong number
    }
    return 0;
}