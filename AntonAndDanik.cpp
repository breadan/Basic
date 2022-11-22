#include<iostream>
using namespace std;

int main()
{

	int size, Anton=0, Danik=0;
	string score;
	cin >> size;
	cin >> score;

	for (int i = 0; i < size; i++) {
		if (score[i] == 'A') {
			Anton++;
		}
		else {
			Danik++;
		}
	}
	if (Anton > Danik) {
		cout << "Anton";
	}
	else if (Danik > Anton) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}


	return 0;
}