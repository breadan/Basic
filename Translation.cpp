#include<iostream>
#include<string>
using namespace std;

//Reversing a String of Letters
//int main()
//{
//	string s;
//	cin >> s;
//	string s_new = "";
//
//	for (int i = s.size() - 1; i >= 0; i--) {
//		s_new += s[i];
//	}
//	cout << s_new;
//
//
//	return 0;
//}

int main()
{
	string s, s2;
	cin >> s >> s2;
	reverse(s.begin(), s.end());
	if (s == s2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}




	return 0;
}