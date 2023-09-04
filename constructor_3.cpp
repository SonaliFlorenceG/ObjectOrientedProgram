#include<iostream>
using namespace std;

class College
{
	public:
		static string college,city;
		string name,rollno,phone,branch;
		int backlogs;
		double percent;
		College(string n,string r,string p,string b,int bc,double per);
		void display();
		static void display_static()
		{
			cout<<college<<" "<<city<<endl;
		}
};

College::College(string n,string r,string p,string b,int bc,double per)
{
	this->name=n;
	this->rollno=r;
	this->phone=p;
	this->branch=b;
	this->backlogs=bc;
	this->percent=per;
}

void College::display()
{
	cout<<name<<" "<<rollno<<" "<<phone<<" "<<branch<<" "<<backlogs<<" "<<percent<<" ";
	cout<<college<<" "<<city<<endl;
}

string College::college="Aditya College of Engineering"; 
string College::city="Surampalem";

int main()
{
	College s1("21","Sonali","9182763842","CSE",0,90);
	s1.display();
	s1.display_static();
	return 0;
}
