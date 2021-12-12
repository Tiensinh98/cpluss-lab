#include <iostream>

template <typename T> class LListNode
{
	T data;
	LListNode<T>* next;

public:
	LListNode(T newData = T(), LListNode<T>* newNext = nullptr) :
		data(newData),
		next(newNext)
	{

	}

	T getVal() const { return data; }

	void setVal(T newValue);

	//friend class LList<T>;
};

template <typename T> void LListNode<T>::setVal(T newValue)
{
	data = newValue;
}

template <typename T> class LList
{
	LListNode<T>* head;
	LListNode<T>* recursiveCopy(LListNode<T>* rhs);
public:
	LList() : head(nullptr)
	{

	}

	LList(const LList& rhs) : head(nullptr)
	{
		*this = rhs;
	}

	~LList() { clear(); }

	void insertAtHead(T newData);

	T removeFromHead();

	bool isEmpty() const { return head == nullptr; }

	void clear();

	void insertAtEnd(T newData);

	void insetAtPoint(LListNode<T>* ptr, T newData);

	int size() const;
};
template <typename T> int LList<T>::size() const
{
	int count = 0;
	LListNode<T>* temp = head;
	while (temp != nullptr)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

template <typename T> void LList<T>::insertAtHead(T newData)
{
	LListNode<T>* temp = new LListNode<T>(newData);
	LListNode<T>* newNode = head;
	newNode = newNode->next;
	newNode->next = temp;
}

template <typename T> void LList<T>::insertAtEnd(T newData)
{
	if (isEmpty())
	{
		insertAtHead(newData);
		return;
	}
	LListNode<T>* temp = new LListNode<T>(newData);
	LListNode<T>* end = head;
	while (end->next != nullptr)
	{
		end = end->next;
	}
	end->next = temp;
}

template <typename T> LListNode<T>* LList<T>::recursiveCopy(LListNode<T>* rhs)
{
	if (rhs == nullptr)
	{
		return nullptr;
	}
	return new LListNode(rhs->data, recursiveCopy(rhs->next));
}

template <typename T> void LList<T>::clear()
{
	if (head == nullptr)
	{
		return;
	}
	delete head->next;
	return clear();
}

int main()
{
	return 0;
}