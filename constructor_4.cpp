#include<iostream>
using namespace std;

class Human{
	public:
		string name;
		int age;
		Human()
		{
			name="No Name";
			age=0;
		}
		Human(string word,int val)
		{
			name=word;
			age=val;
		}
		Human(string word)
		{
			name=word;
			age=0;
		}
		Human(int val)
		{
			name="no name";
			age=val;
		}
		Human(Human &Sonali)
		{
			name=Sonali.name;
			age=Sonali.age;
		}
		void Display()
		{
			cout<<"Hi I am "<<name<<" of age "<<age<<endl;
		}
		
};

		
int main()
{
	Human Sonali("Sonali",18);
	Human Florence(Sonali);   				//copy constructor
	Human Haleema("Haleema");
	Human Jitya(17);
	Sonali.Display();
	Haleema.Display();
	Jitya.Display();
	Florence.Display();
	return 0;
}
