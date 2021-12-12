#include <iostream>
#include <queue>

template <class T>
class BSTNode
{
	T data;
	BSTNode <T>* parent;
	BSTNode <T>* left;
	BSTNode <T>* right;

public:
	BSTNode(T newData = T(), BSTNode<T>* newParent = nullptr, BSTNode<T>* newLeft = nullptr,
		BSTNode<T>* newRight = nullptr) :
		data(newData),
		parent(newParent),
		left(newLeft),
		right(newRight)
	{

	};

	//friend class BST<T>;
	int getSize() const;
};

template <class T>
int BSTNode<T>::getSize() const
{
	int count = 1;
	if (left != nullptr)
	{
		count += left->getSize();
	}
	if (right != nullptr)
	{
		count += right->getSize();
	}
	return count;
}


template <class T>
class BST
{
public:
	void printInOrder(BSTNode<T>* node);
	void printpreOrder(BSTNode<T>* node);
	void printPostOrder(BSTNode<T>* node);
	void printLevelOrder();
	void insert(T item);
	void remove(BSTNode<T>*& temp);

protected:
	BSTNode<T>* root;
	BSTNode<T>* parent;
};

template <class T>
void BST<T>::printInOrder(BSTNode<T>* node)
{
	if (node != nullptr)
	{
		printInOrder(node->left);
		std::cout << node->data << ", ";
		printInOrder(node->right);
	}
}

template <class T>
void BST<T>::printpreOrder(BSTNode<T>* node)
{
	std::cout << node->data << ", ";
	printpreOrder(node->left);
	printpreOrder(node->right);
}

template <class T>
void BST<T>::printPostOrder(BSTNode<T>* node)
{
	printPostOrder(node->left);
	printPostOrder(node->right);
	std::cout << node->data << ", ";
}

template <class T>
void BST<T>::printLevelOrder()
{
	std::queue<BSTNode<T>*>* q;
	q->push(root);
	while (!q->empty())
	{
		BSTNode<T>* temp = q->front();
		q->pop();
		std::cout << temp->data << ",";
		if (temp->left != nullptr)
		{
			q->push(temp->left);
		}
		if (temp->right != nullptr)
		{
			q->push(temp->right);
		}
	}
}

template<class T>
void BST<T>::insert(T item)
{
	if (root == nullptr)
	{
		root = new BSTNode<T>(item);
		return;
	};
	BSTNode<T>* temp = root;
	BSTNode<T>* prev = root;
	while (temp != nullptr)
	{
		prev = temp;
		if (item < temp->data)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	if (item < prev->data)
	{
		prev->left = new BSTNode<T>(item, prev);
	}
	else
	{
		prev->right = new BSTNode<T>(item, prev);
	}
}

template<class T>
void BST<T>::remove(BSTNode<T>*& temp)
{
	if (temp->left == nullptr && temp->right == nullptr)
	{
		if (parent == nullptr)
		{
			root = nullptr;
		}
		else if (parent->left == temp)
		{
			parent->left = nullptr;
		}
		else
		{
			parent->right = nullptr;
		}
		delete temp;
	}
	else if (temp->left == nullptr)
	{
		BSTNode<T>* toDelete = temp->right;
		temp->data = toDelete->data;
		temp->left = toDelete->left;
		if (temp->left != nullptr)
		{
			temp->left->parent = temp;
		}
		temp->right = toDelete->right;
		if (temp->right != nullptr)
		{
			temp->right->parent = temp;
		}
		delete toDelete;
	}
	else if (temp->right == nullptr)
	{
		BSTNode<T>* toDelete = temp->left;
		temp->data = toDelete->data;
		temp->left = toDelete->left;
		if (temp->left != nullptr)
		{
			temp->left->parent = temp;
		}
		temp->right = toDelete->right;
		if (temp->right != nullptr)
		{
			temp->right->parent = temp;
		}
		delete toDelete;
	}
	else
	{
		BSTNode<T>* minOfRight = temp->right;
		while (minOfRight->left != nullptr)
		{
			minOfRight = minOfRight->left;
		}
		temp->data = minOfRight->data;
		remove(minOfRight);
	}
}

int main()
{
	std::cout << "Hello World!\n";
}
