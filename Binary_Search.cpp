// Binary Search 
// Write a function that takes in a sorted array of integers as well as a target integer.
// The function should use the Binary Search algorithm to determine if the target integer is contained in the array and should return its index if it is, otherwise -1 . 
// If you're unfamiliar with Binary Search, we recommend watching the Conceptual Overview section of this question's video explanation before starting to code. 
// Sample Input 
// array = [0, 1, 21, 33, 45, 45, 61, 71, 72, 73) target = 33 
// Sample Output 
// 3 


#include <vector>
#include<cmath>
#include<iostream>
using namespace std;

int BS(vector<int> array, int start, int end, int target){
	cout << "started in BS \n";
	cout << target;
	cout<<"\n";
	
	if( start > end){
		return -1;
  }
	int mid = (start+end)/2;

	if (array[mid] == target){
		return mid;
	}
	else if(array[mid] < target){
		return BS(array, mid+1, end, target);
	}
	else{
		return BS(array, start, mid-1, target);
	}
}


int binarySearch(vector<int> array, int target) {
	int end = array.size()-1;
	int start = 0;
	int n = BS(array, start, end, target);
	return n;
}
