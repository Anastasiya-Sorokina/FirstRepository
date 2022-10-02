#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	cout<<"Enter x:";
	cin>>x;
	cout<< "Enter y:";
	cin>>y;
	z = (1 + abs(x * y)) / (abs(x) + abs(y));
	cout << "Result " << z << "\n";
	return(0);
}