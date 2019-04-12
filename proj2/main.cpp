#include <iostream>
using namespace std;

void PrintHello();
void ADD(int x, int y);
void SUB(int x, int y);

int main()
{
	int x,y;
	cout<<"Please input the first number:";
	cin>>x;
	cout<<"Please input the second number:";
	cin>>y;
	PrintHello();
	ADD(x,y);
	SUB(x,y);

	return 0;
}
