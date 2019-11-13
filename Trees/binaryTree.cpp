#include <iostream>
#include <fstream>
#include <vector>
#include <string>



using namespace std;

template <typename T> 
struct BinaryNode{
	T key;
	BinaryNode *parent = nullptr;
	BinaryNode *right = nullptr;
	BinaryNode *left = nullptr;

	BinaryNode(){}
	// ~BinaryNode(){delete parent; delete right; delete left;}
};

template <typename T> 
class BinarySearchTree{
	private:
		BinaryNode<T> *root;
		BinaryNode<T> *currentNode;
		int num_nodes = 0;
	
	public:
		BinarySearchTree(){}
		~BinarySearchTree(){}


		void insert( T key);

		BinaryNode<T> * findMaximum(BinaryNode<T> * node) const;
		BinaryNode<T> * findMinimum(BinaryNode<T> * node) const;

		bool empty() const{
			return(num_nodes == 0);
		}

		int size(){
			return num_nodes;
		}

		void printTree();


};


template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMaximum(BinaryNode<T> * node) const{

}

template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMinimum(BinaryNode<T> * node) const{
	
}


template <typename T> 
void BinarySearchTree<T>::printTree(){


}

template <typename T> 
void  BinarySearchTree<T>::insert(T key){

	BinaryNode<T> *newNode = new BinaryNode<T>;

	newNode->key = key;

	if (this->empty()){
		root = newNode;
		++num_nodes;		
		currentNode = root;
		return;
	} else{
		

		while(1){
			if(key < currentNode->key){
				cout << currentNode->key << endl;
				currentNode->left = newNode;
				currentNode = currentNode->left;
				++num_nodes;
				return;
			}else if(key > currentNode->key){
				cout << currentNode->key << endl;
				currentNode->right = newNode;
				currentNode = currentNode->right;
				++num_nodes;
				return;
			}
		}

	}


}

int main(int argc, char *argv[]){
	BinarySearchTree<int> Tree;
	



	Tree.insert(10);
	Tree.insert(4);
	Tree.insert(75);
	Tree.insert(3);

	cout << Tree.size() << endl;
	return 0;
}
