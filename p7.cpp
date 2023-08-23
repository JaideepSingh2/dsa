#include<iostream>
using namespace std;
class student
{
    public:
    string major;
    string name;
    double gpa;
    student()
    {
        major="no major";
        name="No name ";
        gpa=0;
    }
    student(string nName,string aAuthor,double pPages)
    {
        major=aAuthor;
        name=nName;
        gpa=pPages;

    }
    
    bool passorfail()
    {
        if(gpa>=4)
        {
            return true;
        }
        else 
        return false;
    }
   // book(string name){
   //          cout<<name<<endl;
    
};
int main()
{
    
    // book book1("harry potter");
    // book1.author="Jaideep Singh";
    // book1.name="Why what when";
    // book1.pages=672;
    // book book2("marvel");
    // book book3("bad");
    student student1("Jai","wtf",2.34);
    student student3=student("Oye","ghth",23);
   //cout<<book2.name<<endl;
    cout<<student1.passorfail()<<endl;
    student student2;
    cout<<endl<<student2.major<<endl;;
    cout<<student3.major<<endl;

}