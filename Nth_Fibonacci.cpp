// Nth Fibonacci
// The Fibonacci sequence is defined as follows: the first number of the sequence is e, the second number is and the nth number is the sum of the (n -1)th and (n - 2)th numbers. 
// Write a function that takes in an integer n and returns the nth Fibonacci number. 
// Important note: the Fibonacci sequence is often defined with its firsttwo numbers as F0 = 43 and = 1.
// For the purpose of this question, the first Fibonacci number is Fe; therefore, getkithFi (I) is equal to Fe ge1,1111Fiti(2) is equal to Fl etc.. 
// Sample Input #1 n = 2 
// Sample Output #1 1 /1 0, 1 
// Sample Input #2 n = 6 
// Sample Output #2 5 // e,1, 1, 2, 3, 5 

// O(2^n) Time 
//Brute force methode using recursion 

int getNthFib(int n) {
	if ((n==0) || (n==1)){
		return 0;
	}
	if (n==2){
		return 1;
	}
	int b = getNthFib(n-1);
	int d = getNthFib(n-2);
	return b+d;
}
