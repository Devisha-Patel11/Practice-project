#include<iostream>
using namespace std;
// void asking(){
//     name obj;
//     string ask;
//     cout<<"you want to add more  detail yes or not \n ";
//     cin>>ask;
//     if(ask=="yes"){
//         obj.get_data();
//         obj.display_data();
//     }

// }
class name{
    public:
    int n;
    int y;
    int z;
    name(){
    }
    name(int a , int b, int c){
      n=a;
      y=b;
      z=c;
    }
    name(const name & copy){
        n=copy.n;
        y=copy.y;
        z=copy.z;
    }
    void get_data(); 
    void display_data();

};
void name::get_data(){
     cout<<"Enter value of x \n";
     cin>>n;
     cout<<"enter value of y \n";
     cin>>y;
     cout<<"Enter value of z \n ";
     cin>>z;
}
void name::display_data(){
    cout<<n<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
int main(){
    name obj;
    name object (4,56,6);
    cout<<object.n<<endl<<object.y<<endl<<object.z<<endl<<endl;

    name object2(object);
    cout<<object2.n<<endl<<object2.y<<endl<<object2.z<<endl<<endl;

    name object3(46,86,78);
    cout<<object3.n<<endl<<object3.y<<endl<<object3.z;

    name object4;
    object4.n=19;
    object4.y=45;
    object4.z=34;

    string ask;
    cout<<"you want to add detail yes or not \n ";
    cin>>ask;
    while(ask=="yes"){
        obj.get_data();
        obj.display_data();
    }
   return 0;    

}