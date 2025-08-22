#include<iostream>
using namespace std;
class Rectangle{
	private:
   float length;
   float width;
   public:
   	Rectangle(){
   		length=1.0;
   		width=1.0;
	   }
	   Rectangle(float l,float w){
	   	length=l;
	   	width=w;
	   }
	   Rectangle(int sides){
	   	length=sides;
	   	width=sides;
	   }
	   double area(){
	   	return length*width;
	   }
	   void display(){
	   	cout<<"Length=\t" <<length <<"\twidth=\t"<<width;
	   	cout<<"\tArea of Rectangle:"<<area()<<endl;
	   }
   		
};
	