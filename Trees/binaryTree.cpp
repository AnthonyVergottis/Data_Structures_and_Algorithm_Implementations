#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>


using namespace std;

template <typename T> 
struct BinaryNode{
	T key ;
	BinaryNode<T> *right;
	BinaryNode<T> *left;

	BinaryNode(T data): key{data}, left{nullptr}, right{nullptr}{}

	// BinaryNode<T> & operator= ( const BinaryNode<T> & node){
	// 	key = node->key;
	// 	left = node->left;
	// 	right = node->right;
	// 	return *this;
	// }

	
};


template <typename T> 
class BinarySearchTree{
	private:
		BinaryNode<T> *root;
		int num_nodes = 0;
		void insert(BinaryNode<T> *nodeTree, T data);
		bool isBalanced(BinaryNode<T> *nodeTree);
		int getHeight(BinaryNode<T> *nodeTree);
	
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

		bool isBalanced(){return isBalanced(root);}
		int getHeight(){ return getHeight(root);}
		bool find(T key) const;
		bool empty() const{return(num_nodes == 0);}
		int size() const {return num_nodes;}

		void printTree() const;


};

template <typename T> BinaryNode<T> * BinarySearchTree<T>::getRoot() const{return root;}



template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMaximum(){
	if(this->empty())
	{
		return nullptr;
	}

	BinaryNode<T> * max =  root;

	

	T maxKey = root->key;
	while(max->right != nullptr){
		max = max->right;
		if(max->key > maxKey) maxKey = max->key;
		
	}
	return max;
}

template <typename T> 
BinaryNode<T> * BinarySearchTree<T>::findMinimum(){
	if(this->empty())
	{
		return nullptr;
	}
	BinaryNode<T> * min = root;


	T minKey = root->key;
	while(min->left != nullptr){
		min = min->left;
		if(min->key < minKey) minKey = min->key;	
	}
	return min;
}



template <typename T> 
void BinarySearchTree<T>::printTree() const{


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

template <typename T>
bool BinarySearchTree<T>::find(T key) const{
	
}

template <typename T>
int BinarySearchTree<T>::getHeight(BinaryNode<T> *nodeTree){
	if(!nodeTree){
		return 0;
	}
	return 1 + max(getHeight(nodeTree->left), getHeight(nodeTree->right));
}

template <typename T>
bool BinarySearchTree<T>::isBalanced(BinaryNode<T> *nodeTree){
	if(!nodeTree){
		return false;
	}

	int leftHeight = getHeight(nodeTree->left);
	int rightHeight  = getHeight(nodeTree->right);

	if(abs(leftHeight-rightHeight) > 1) return false;
	return true;

	
}

int main(int argc, char *argv[]){

	BinarySearchTree<int> Tree;
	bool isTreeBalanced = false;

	Tree.insert(555);
	Tree.insert(795);
	Tree.insert(10);
	Tree.insert(67);
	Tree.insert(4);
	Tree.insert(444);
	Tree.insert(4344);
	Tree.insert(44542);

	cout << "\nIs tree balaned: " << std::boolalpha << Tree.isBalanced() << endl;

	BinaryNode<int> *rootNode = Tree.getRoot();
	BinaryNode<int> *min = Tree.findMinimum();
	BinaryNode<int> *max = Tree.findMaximum();

	if (min != nullptr && max != nullptr && rootNode != nullptr){
		cout << "\nMinimum Value: " << min->key << endl;
		cout << "Maximum Value: " << max->key << endl;
		cout << "Root Value: " << rootNode->key << endl;
	}
	cout << "\nNumber of Nodes in Binary Search Tree: " << Tree.size() << endl;
	cout << "Empty: " << std::boolalpha << Tree.empty() << endl;
	cout << endl;
	return 0;
}
