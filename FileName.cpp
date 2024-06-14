#include<iostream>
using namespace std;

struct Calc {
	double x;
	double y;

	double mult()  {
		return x * y;
	}

	double div()  {
		return x / y;
	}
};





int main()
{
	
	Calc a{ 10, 2 };

	cout << a.div() << endl;
	cout << a.mult() << endl;
	

}

























