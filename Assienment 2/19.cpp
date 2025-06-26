#include<iostream>
using namespace std;
int main(){
    try{
    int choice;
    cout<<"Enter 1 to throw int, 2 for float, 3 for string :";
    cin>>choice;
    if(choice==1)
        throw 10;
    else if (choice ==2)
        throw 3.14f;
    else if (choice ==3)
        throw "An Error occurred";
    else 
        cout<<"No exception thrown"<<endl;
}
    catch(...){
    cout<<"Exception caught : Some unknown error occurred"<<endl;
}
return 0;
}