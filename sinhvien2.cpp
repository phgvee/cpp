#include <iostream>
using namespace std;
struct Students{
    string name;
    int age;
    string grade;
    string gender;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
    void getInformation(){
        cin>>name>>age>>grade>>gender;
    }
};
int main(){
    int n;
    cin>>n;
    Students students[100];
    for(int i =0; i<n; ++i){
        students[i].getInformation();
    }
    cout<<"-----------------------"<<endl;
    for(int i =0;i<n;++i){
        students[i].display();
    }
    return 0;
}