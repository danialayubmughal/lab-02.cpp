#include<iostream>
using namespace std;
class Locker{
	public:
	Locker()
	{
		cout<<"Locker allocated to costumer."<<endl;
	}
	~Locker(){
		cout<<"Locker returned by costumer."<<endl;
	}
	};