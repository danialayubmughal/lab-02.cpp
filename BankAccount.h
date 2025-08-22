#include<iostream>
using namespace std;
class BankAccount{
	private:
		string accountNumber;
		string accountHolder;
		double balance;
		public:
		BankAccount(string AN,string AH,double B){
			accountNumber=AN;
			accountHolder=AH;
			balance=B;
		}	
		void showAccountDetail(){
			cout<<"Account Number is:"<<accountNumber<<endl;
			cout<<"Account Holder is:"<<accountHolder<<endl;
			cout<<"Account Balance is:"<<balance<<endl;
		}
};