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

	BinaryNode(T value): key{value}{}
	// ~BinaryNode(){delete parent; delete right; delete left;}
};

template <typename T> 
class BinarySearchTree{
	private:
		BinaryNode<T> *root;
		int num_nodes = 0;
	
	public:
		BinarySearchTree(): root{new BinaryNode<T>(0)}{}
		~BinarySearchTree(){delete root;}

		void insert(BinaryNode<T> * node);

		BinaryNode<T> * findMaximum(BinaryNode<T> * node) const;
		BinaryNode<T> * findMinimum(BinaryNode<T> * node) const;

		bool empty() const{
			return(num_nodes == 0);
		}

		int size(){
			return num_nodes;
		}


};


template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMaximum(BinaryNode<T> * node) const{

}

template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMinimum(BinaryNode<T> * node) const{
	
}



template <typename T> 
void BinarySearchTree<T>::insert(BinaryNode<T> * node){
	if (this->empty()){
		root->key = node->key;
		root->right = nullptr;
		root->left = nullptr;
		++num_nodes;
		// cout << comp->key << endl;
	} else {
		if(node->key < root->key){
			// MUST INCLUDE FIND OPERATORS HERE MIN-MAX

			// root->right = node;
			// node->parent = root;
		}else if(node->key > root->key){
			// MUST INCLUDE FIND OPERATORS HERE MIN-MAX


			// root->left = node;
			// node->parent = root;
		}
		
	}
	
}

int main(int argc, char *argv[]){
	BinarySearchTree<int> Tree;
	

	BinaryNode<int> *node1 = new BinaryNode<int>(35);


	// BinaryNode<int> *node2= new BinaryNode<int>;
	// node2->addValue(7);

	// BinaryNode<int> *node3= new BinaryNode<int>;
	// node3->addValue(34);

	// BinaryNode<int> *node4= new BinaryNode<int>;
	// node4->addValue(2);

	// BinaryNode<int> *node5= new BinaryNode<int>;
	// node5->addValue(10);


	Tree.insert(node1);
	delete node1;
	// Tree.insert(key,node2);
	// cout << node->key << endl;
	return 0;
}
