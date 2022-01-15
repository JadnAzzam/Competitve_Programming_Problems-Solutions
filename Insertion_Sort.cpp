// Insertion Sort 
// Write a function that takes in an array of integers and returns a sorted version of that array. 
// Use the Insertion Sort algorithm to sort the array. 
// If you're unfamiliar with Insertion Sort, we recommend watching the Conceptual Overview section of this question's video explanation before starting to code. 
// Sample input 
// arrays = [8, 5, 2, 9, 5, 6, 3] 
// Sample Output 
// [2, 3, 5, 5, 6, 8, 9] 

#include<iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> array) {
	for(int i=1; i<array.size(); i++){
		int j = i;
		while((array[j]<array[j-1])&&(j>=1)){
			int b = array[j-1];
			array[j-1]=array[j];
			array[j]= b;
			j--;
		}
	}
  return array;
}
