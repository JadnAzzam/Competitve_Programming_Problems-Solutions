// Find Three Largest Numbers 
// Write a function that takes in an array of at least three integers and, without sorting the input array, returns a sorted array of the three largest integers in the input array. 
// The function should return duplicate integers if necessary; for example, it should return [10, 10, 12] for an input array of [10, 5, 9, 10, 12] . 
// Sample Input 
// array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7] 
// Sample Output 
// [18, 141, 541] 


#include<vector>
#include<iostream>
using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
	vector<int> ans={array[0],array[1],array[2]};
	sort(ans.begin(),ans.end());
  
	int first = ans[2];
	int second = ans[1];
	int third = ans[0];
	
	for(int i=3; i<array.size();i++){
		if((array[i]>=third)&&(array[i]<=second)&&(array[i]<=first)){
			third = array[i];
		}
		else if((array[i]>=third)&&(array[i]>=second)&&(array[i]<=first)){
			third = second;
			second = array[i];
		}
		else if((array[i]>=third)&&(array[i]>=second)&&(array[i]>=first)){
			third = second;
			second = first;
			first = array[i];
		}
	}
	vector<int> finalAns={third,second,first};
  return finalAns;
}
