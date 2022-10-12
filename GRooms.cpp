#include<iostream>
#include<string>

using namespace std;

int main()
{
	//num of rooms
	int n,count=0;
	//num of people
	int pi=0;
	//capacity
	int capacity=0;
	cin >> n; 

	for (int i = 0; i < n; i++) {
		cin >> pi >> capacity;

		if (capacity - pi >= 2) {
			/*	cout << "YES\n";
			}
			else {
				cout << "NO\n";
			*/
			count++;
		}
	}cout << count;

	return 0;
}