// Depth-first Search
// You're given a Node class that has a structure. 
// name 
// and an array of optional children nodes. When put together, nodes form an acyclic tree-like 
// Implement the depthFi rstSearch method on the Node class, which takes in an empty array, traverses the tree using the Depth-first Search approach 
// (specifically navigating the tree from left to right), stores all of the nodes' names in the input array, and returns it. 
// If you're unfamiliar with Depth-first Search, we recommend watching the Conceptual Overview section of this question's video explanation before starting to code. 

// Sample Input 
// {
//   "graph": {
//     "nodes": [
//       {"children": ["B", "C", "D"], "id": "A", "value": "A"},
//       {"children": ["E", "F"], "id": "B", "value": "B"},
//       {"children": [], "id": "C", "value": "C"},
//       {"children": ["G", "H"], "id": "D", "value": "D"},
//       {"children": [], "id": "E", "value": "E"},
//       {"children": ["I", "J"], "id": "F", "value": "F"},
//       {"children": ["K"], "id": "G", "value": "G"},
//       {"children": [], "id": "H", "value": "H"},
//       {"children": [], "id": "I", "value": "I"},
//       {"children": [], "id": "J", "value": "J"},
//       {"children": [], "id": "K", "value": "K"}
//     ],
//     "startNode": "A"
//   }
// }

// Sample Output 
// ["A", "B", "E", "F", "I", "J", "C", "D", "G", "K", "H"]


// Do not edit the class below except
// for the depthFirstSearch method.
// Feel free to add new properties
// and methods to the class.


#include <vector>
#include<iostream>
using namespace std;

class Node {
public:
  string name;
  vector<Node *> children;

  Node(string str) {
		name = str; 
	}

  vector<string> depthFirstSearch(vector<string> *array) {
		array -> push_back(this->name);
		for (int i=0; i<this->children.size();i++){
			children[i]->depthFirstSearch(array);
		}
		return *array;
  }

  Node *addChild(string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
	
};
