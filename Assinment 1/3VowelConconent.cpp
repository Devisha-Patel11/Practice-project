#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter the alphabat : ";
    cin>>alpha;
    if(alpha=='a' ||alpha=='e'  || alpha=='i'  || alpha=='o'  ||  alpha=='u'){
        cout<<"The alphabat alpha is Vowel. ";
    }
    else {
        cout<<"The alphabat alpha is Conconent. ";
    }
    return 0;
}