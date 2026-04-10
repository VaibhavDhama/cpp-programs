#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name = name; 
        this->rno = rno;
        this->marks = marks;

    }
};
void change(Student* s){
    s->rno = 11;
}
int main(){
    Student* s = new Student("vaibhav",33,90.1);
    cout<<s->rno<<endl;
    change(s);
    cout<<s->rno<<endl;
}