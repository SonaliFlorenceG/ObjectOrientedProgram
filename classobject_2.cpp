#include<iostream>
using namespace std;

class Student {
	private:
	int rollno,percentage;
	string name,college,branch;
	public:
		Student(string n,string c,string b,int r,int p)
		{
			this->name=name;
			this->college=college;
			this->branch=branch;
			this->rollno=rollno;
			this->percentage=percentage;
		}
	void modify()
	{
		name="Haleetya";
		college="ACOE";
		branch="CSE";
		rollno=21;
		percentage=98;
	}
	void display ()
	{
		cout<<name<<" "<<rollno<<" "<<branch<<" "<<college<<" "<<percentage<<endl;
	}
};

int main()
{
	Student s1("Sonali","Aditya","CSE",22,79);
	s1.modify();
	s1.display();
	return 0;
}
