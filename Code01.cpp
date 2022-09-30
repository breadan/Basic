#include<iostream>
#include<string>

using namespace std;

int prime(int num)
{
	int div = num / 2;
	for (int i = 2; i <= div; i++)
	{
		if (num % i == 0)
			return -1;
		break;
	}
	return num;
}

int main()
{
	int a, b ;
	int count = 0;

	cin >> a >> b;
	while (a <= b)
	{
		a *= 3;
		b *= 2;
		count++;
	}		cout << count;





	return 0;
}

