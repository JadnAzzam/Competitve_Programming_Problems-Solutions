// Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum.
// If any two numbers in the input array sum up to the target sum, the function should return them in an array, in any order. 
// If no two numbers sum up to the target sum, the function should return an empty array. 
// Note that the target sum has to be obtained by summing two different integers in the array; you can't add a single integer to itself in order to obtain the target sum. 
// You can assume that there will be at most one pair of numbers summing up to the target sum. 
// Sample Input 
// array = [3, 5, -4, 8, 11, 1, -1, 6] targetSum = 
// Sample Output 
// [ -1, 11] the numbers could be in reverse order 


#include <vector>
#include<iostream>
using namespace std;


// my first solution
// O(n^2) Time and O(1) space 
vector<int> twoNumberSum(vector<int> array, int targetSum) {
	int k = array.size();
	vector<int> pair = {};	
	for (int i=0; i<k-1; i++){
		for(int j= i+1; j<k; j++){
			if (array[i] + array[j] == targetSum){
				pair.push_back(array[i]);
				pair.push_back(array[j]);
				return pair;
			}
		}
	}
  return pair;
}


// my first solution
// O(nlogn) Time and O(1) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int> pair = {};
	sort(array.begin(),array.end());
  int start = 0;
  int end = (array.size()-1);
	
  while(start <= end){
		if ( array[start] + array[end] == targetSum){
			pair.push_back(array[start]);
			// cout<<start;
			// cout<<"\n";
			// cout<<end;
			pair.push_back(array[end]);
			return pair;
		}
		else if((array[start] + array[end]) < targetSum){
			start++;
		}
		else if((array[start] + array[end]) > targetSum){
			end--;
		}
	}
	return pair;
}



// Most optimal solution is implemented using hashtables 
// O(nlog(n)) Time and  O(1) space 

#include <unordered_set> 
vector<int> twoNumberSum(vector<int> array, int targetSum) {
	unordered_set<int> nums;
	for(int num : array){
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end()){
			return vector<int>{potentialMatch, num};
		}
		else{
			nums.insert(num);
		}
	}
	return{};
} 
