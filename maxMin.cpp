#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	
	int max1, max2;
	if (arr[0] <= arr[1]) {
		max1 = arr[0];
		max2 = arr[1];
	}
	else {
		max1 = arr[1];
		max2 = arr[0];
	}

	for (int i = 2; i < 10; i++) {		
		if (max1 <= arr[i]) {
			max2 = max1;
			max1 = arr[i];
		}
		else if(max2<arr[i]) {
			max2 = arr[i];
		}
		
	}cout << max1 << max2 << " ";*/

	int arr2[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr2[i];
	}
	int min1, min2 , ma2;
	if (arr2[0]<=arr2[1])
		min1 = arr2[0], min2 = arr2[1];
	else
		min1 = arr2[1], min2 = arr2[0];

	/*for (int i = 0; i < 5; i++) {
		if (min1 >= arr2[i]) {
			ma2 = min1;
			min1 = arr2[i];
		}
		else {
			ma2 = arr2[i];
		}
	}cout << min1 << " " << ma2 << endl;*/

	for (int i = 0; i < 5; i++) {
		if (min1 >= arr2[i]) {
			min2 = min1;
			min1 = arr2[i];
		}
		else if(min2>=arr2[i]) {
			min2 = arr2[i];
		}
	}cout << min1 << " " << min2; 

}

