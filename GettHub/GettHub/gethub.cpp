#include<iostream>
using namespace std;


//fionacci;

int fibonacci(int num) {
	if (num == 0 || num == 1) {
		return num;
	}return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
	//cout<<fibonacci(4);
	cout << "Enter Number: \n";
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cout << fibonacci(i)<<" ";

	}

	return 0;
}