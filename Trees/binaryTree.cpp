#include <iostream>
#include <fstream>
#include <vector>
#include <string>



using namespace std;

template <typename T> 
struct BinaryNode{
	T key;
	BinaryNode *right;
	BinaryNode *left;

	BinaryNode(const T & value,BinaryNode* rt,BinaryNode *lt) : key{value}, right{rt}, left{lt}{}
};

template <typename T> 
class BinarySearchTree{
	private:
		BinaryNode<T> *root;




};


int main(int argc, char *argv[]){
	BinaryNode<int> *node = new BinaryNode<int>(10,nullptr,nullptr);

	cout << node->key << endl;
	return 0;
}
