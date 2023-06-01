/**
 *Problem Statement:    Suppose, we have a class A which is the base class and we have a class B which is derived 
 	from class A and we have a class C which is derived from class B, we can access the functions of both class A 
	and class B by creating an object for class C.Hence, this mechanism is called multi-level inheritance. 
	(B inherits A and C inherits B).Create a class called Equilateral which inherits from Isosceles and should have 
	a function such that the output is as given below.
 *Author: Kunal Kathpal (https://github.com/kunal-2002)
 */
	
#include <bits/stdc++.h>

using namespace std;

class Isosceles{
	public:
		void display1(){
			cout<<"I am an isosceles triangle\n";
		}
};

class Equilateral : public Isosceles{
	public:
		void display2(){
			cout<<"I am an Equilateral triangle\n";
		}
};

class C : public Equilateral{
	public:
		void display3(){
			cout<<"I am a triangle";
		}
};

int main(){
	C obj;
	
	obj.display2();
	obj.display1();
	obj.display3();
	return 0;
}
