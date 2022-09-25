#include<iostream>

using namespace std;

//swap function
void readVal(int& Num1, int& Num2)
{
	cout << "Enter Number 1 :\n";
	cin >> Num1;

	cout << "Enter Number 2 : \n";
	cin >> Num2;
}
void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void printVal2(int Num1, int Num2)
{
	cout << "\n Number1= " << Num1 << endl;
	cout << "\n Number2 is " << Num2 << endl;
}

int main()
{
	//swap function
	int N1, N2;
	readVal(N1, N2);
	printVal2(N1, N2);
	Swap(N1, N2);
	printVal2(N1, N2);

	//printVal(readValue());

}