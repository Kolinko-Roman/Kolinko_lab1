#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	int number;
	cout << "Введіть любе число:";
	cin >> number;
	if(number>0) {
    	cout << "Це число додатнє";
	} else if(number<0) {
    	cout << "Це число відємне";
	} else {
    	cout << "Це число дорівнює нулю";
	}
	return 0;
}
