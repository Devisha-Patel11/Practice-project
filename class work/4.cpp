// #include<iostream>
// using namespace std;
// class A{
//     public: 
//     int value;
// };
//     int dis(A x){
//         cout<<x.value<<endl;
//     }
//     int op(A j,A k){
//         int a,b,d;
//         a=j.value,b=k.value;
//         cout<<a+b<<endl;
//     }
// int main(){
//     A obj1;
//     obj1.value=12;
//     A obj2;
//     obj2.value=50;
//     dis(obj1);
//     dis(obj2);
//     op(obj1,obj2);
// return 0;
// }
#include<iostream>
using namespace std;
class A{
    public: 
    int value;
};
    int dis(A x){
        cout<<x.value<<endl;
    }
    A op(A j,A k){
        A add;
        add.value=j.value+k.value;
        return add;
    }
int main(){
    A obj1;
    obj1.value=12;
    dis(obj1);
    A obj2;
    obj2.value=50;
    dis(obj2);
    A obj3;
    obj3=op(obj1,obj2);
    dis(obj3);
return 0;
}
