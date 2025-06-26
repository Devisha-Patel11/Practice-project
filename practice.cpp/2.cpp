#include<iostream>
using namespace std;
class book{
    int ISBN;
    char Author_name[20];
    char Edition[20];
    char publiser_name[20];
    float price;
    public:
    void get_book_data(){
        cout<<"Enter ISBN NO. : ";
        cin>>ISBN;
        cout<<"Enter Author name : ";
        cin>>Author_name;
        cout<<"Enter publicer name : ";
        cin>>publiser_name;
        cout<<"Enter price : ";
        cin>>price;
    }
    void display_book_data(){
        cout<<"ISBN No. : "<<ISBN<<endl;
        cout<<"Author Name : "<<Author_name<<endl;
        cout<<"Edition : "<<Edition<<endl;
        cout<<"Publiser name : "<<publiser_name<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
int main(){
    book b;
    b.get_book_data();
    b.display_book_data();
return 0;
}
