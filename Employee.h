#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		float salary;
		public:
			Employee(){
				id=0;
				name="not assigned";
				salary=0.0;
			}
			void displayDetail(){
				cout<<"ID:"<<id<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Salary:"<<salary<<endl;
			}
};