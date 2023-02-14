// VectorsIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

*/

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
	vector<int> v1 = { 1,2,3,4 };
	v1.push_back(9);
	v1.push_back(9);
	v1.push_back(9);
	v1.push_back(9);
	v1.push_back(9);
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	cout << v1.capacity() << endl;	
	cout << v1.size() << endl;		//v1.front, v1.back, v1.size, v1.capacity, 
	return 0;
}

//Sort - sort(vector.begin(), vector.end());
//sort(vector.begin(), vector.end(), greater<int>());