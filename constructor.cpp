#include<iostream>
using namespace std;
class student{

     //data members
    public:
    string name;
    int rollno;

    //default constructor
    student(){
        name="divesh";rollno=10
    }

    //print 
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollno<<endl;
        cout<<"default constructor is called"<<endl;
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