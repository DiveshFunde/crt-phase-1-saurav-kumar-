#include<iostream>
using namespace std;
class student{
    public:
    //data members
    string name;
    int rollno;

    //member function
    void display(){
        cout<<"name:"<<rollno<<endl;
    }
};

int main() 
{
    student s1;
    s1.name="divesh";
    s1.rollno=14;
    s1.display();


    return 0
}