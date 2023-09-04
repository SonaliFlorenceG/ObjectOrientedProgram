#include<iostream>
using namespace std;

class Student {
	public:
		static string eduins,course;
		string name,rollno,phone,branch,college;
		int backlog;
		double percentage;
		Student(string r,string n,string p,string b, string c,int bc,double per);
		void display();
		static void display_static()
		{
			cout<<eduins<<" "<<course;
		}
};

void Student::display()
{
	cout<<rollno<<" "<<name<<" "<<phone<<" "<<branch<<" "<<college<<" "<<backlog;
	cout<<" "<<percentage<<" "<<eduins<<" "<<course<<endl;
}

Student::Student(string r,string n,string p,string b, string c,int bc,double per)
{
	this->rollno=r;
	this->name=n;
	this->phone=p;
	this->branch=b;
	this->college=c;
	this->backlog=bc;
	this->percentage=per;
}

//string static eduins="Aditya";  //defining
//string static course="CPP";    

string Student::eduins="Aditya";  //assigning
string Student::course="CPP";


int main()
{
	Student s1("21","Sonali","9182763842","CSE","AEC",0,90);
	s1.display();
	s1.display_static();
	return 0;
}
