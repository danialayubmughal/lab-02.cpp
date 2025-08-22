#include<iostream>
#include"BankAccount.h"
#include"Employee.h"
#include"Rectangle.h"
#include"Locker.h"
using namespace std;
int main(){
	cout<<"====================01================"<<endl;
	Employee e;
	e.displayDetail();
	
	cout<<"====================02================"<<endl;
	BankAccount b("PK0309800780100","Muhammad Awais",10000);
	b.showAccountDetail();
	cout<<"====================03================"<<endl;	
	Rectangle R1;
	R1.display();
	Rectangle R2(3.4,4.0);
	R2.display();
	Rectangle R3(4);
	R3.display();
	cout<<"====================04================"<<endl;	
	Locker locker;
	Locker*locker2=new Locker();
	delete locker2;
	return 0;
	
}
