#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>


using namespace std;



template <typename T> 
struct BinaryNode{
	T key ;
	BinaryNode<T> *parent;
	BinaryNode<T> *right;
	BinaryNode<T> *left;

	BinaryNode(T data): key{data}, parent{nullptr}, left{nullptr}, right{nullptr}{}

	BinaryNode<T> & operator= ( const BinaryNode<T> & node){
		key = node.key;
		parent = node->parent;
		left = node->left;
		right = node->right;
		return *this;
	}

	
};

template <typename T> 
ostream & operator<<(ostream &output,BinaryNode<T> *node ){
	output << node->key << "  " << node->left << "  " << node->right;
	return output;
}



template <typename T> 
class BinarySearchTree{
	private:
		BinaryNode<T> *root;
		int num_nodes = 0;
		void insert(BinaryNode<T> *nodeTree, T data);
	
	public:
		BinarySearchTree(){
			root = nullptr;
		}

		~BinarySearchTree(){}

		
		void insert(T key){
			insert(root,key);
		}

		BinaryNode<T> * getRoot() const;
		BinaryNode<T> * findMaximum();
		BinaryNode<T> * findMinimum();

		template <typename U> 
		friend ostream & operator<<(ostream &output,const BinaryNode<U> * node );

		bool empty() const{
			return(num_nodes == 0);
		}

		int size() const {
			return num_nodes;
		}

		void printTree();


};



template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::getRoot() const{
	return root;
}

template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMaximum(){
	BinaryNode<T> * max =  root;

	if(root == nullptr) return nullptr;

	max = root;
	T maxKey = root->key;
	while(max->right != nullptr){
		max = max->right;
		if(max->key > maxKey) maxKey = max->key;
		
	}
	return max;
}

template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMinimum(){
	BinaryNode<T> * min = root;

	min = root;

	T minKey = root->key;
	while(min->left != nullptr){
		min = min->left;
		
		if(min->key < minKey){ 
			minKey = min->key;
		}
		
		
	}
	return min;
}



template <typename T> 
void BinarySearchTree<T>::printTree(){


}

template <typename T>
void BinarySearchTree<T>::insert(BinaryNode<T> *nodeTree, T data){
	
	if (!nodeTree) 
	{
		++num_nodes;
		nodeTree = new BinaryNode<T>(data);
		root = nodeTree;
		
	}
	else
	{
		
		if(data < nodeTree->key)
		{
			
			if(!nodeTree->left)
			{
				++num_nodes;
				BinaryNode<T> *newNode = new BinaryNode<T>(data);
				nodeTree->left = newNode;
				// delete newNode;
				
			}
			else
			{
				insert(nodeTree->left,data);
			}
		}
		else
		{
			if(!nodeTree->right)
			{
				++num_nodes;
				BinaryNode<T> *newNode = new BinaryNode<T>(data);
				nodeTree->right = newNode;
				// delete newNode;	
			}
			else
			{
				insert(nodeTree->right,data);
			}
		}
	}
	// delete nodeTree;
	
}

int main(int argc, char *argv[]){

	BinarySearchTree<int> Tree;
	
	
	
	
	Tree.insert(555);
	Tree.insert(795);
	Tree.insert(10);
	Tree.insert(67);
	Tree.insert(4);
	Tree.insert(56);
	Tree.insert(456);
	Tree.insert(78);
	Tree.insert(1);
	Tree.insert(78);

	// BinaryNode<int> *min = Tree.findMinimum();
	// BinaryNode<int> *max = Tree.findMaximum();
	cout << "\n Number of Nodes: " << Tree.size() << endl;
	// cout << "Minimum Value: " << min->key << endl;
	// cout << "Maximum Value: " << max->key << endl;

	return 0;
}
