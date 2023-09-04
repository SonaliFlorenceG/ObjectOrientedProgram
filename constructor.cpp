#include<iostream>
using namespace std;

class Student {
	public:
		string name,rollno,phone,branch,college;
		int backlog;
		double percentage;
		Student(string r,string n,string p,string b, string c,int bc,double per)
		{
			this->rollno=r;
			this->name=n;
			this->phone=p;
			this->branch=b;
			this->college=c;
			this->backlog=bc;
			this->percentage=per;
		}
		void display()
		{
			cout<<rollno<<" "<<name<<" "<<phone<<" "<<branch<<" "<<college<<" "<<backlog;
			cout<<" "<<percentage<<" "<<endl;
		}
};


int main()
{
	Student s1("21","Sonali","9182763842","CSE","AEC",0,90);
	s1.display();
	return 0;
}
