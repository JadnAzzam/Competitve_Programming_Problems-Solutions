// Palindrome Check 
// Write a function that takes in a non-empty string and that returns a boolean representing whether the string is a palindrome. 
// A palindrome is defined as a string that's written the same forward and backward. Note that single-character strings are palindromes. 
// Sample Input 
// string = "abcdcba" 
// Sample Output 
// true // its written the same forward and backward 


O(n) Time and O(1) Space

bool isPalindrome(string str) {
  // Write your code here.
	int start = 0;
	int end = str.length()-1;
	while(start<end){
		if(str[start]==str[end]){
			start++;
			end--;
		}
		else{
			return false;
		}
	}
  return true;
}

