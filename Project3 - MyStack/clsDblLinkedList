#pragma once

#include <iostream>

using namespace std;


template <class T>
class clsDblLinkedList {

private:

	int _Size;

public:

	class Node {
	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	Node* GetNode(int Index)
	{

		int Counter = 0;

		if (Index > _Size - 1 || Index < 0)
			return NULL;

		Node* Current = head;
		while (Current != NULL && (Current->next != NULL)) {

			if (Counter == Index)
				break;

			Current = Current->next;
			Counter++;

		}

		return Current;
	}

	T GetItem(int index) {

		Node* ItemNode = GetNode(index);

		if (ItemNode == NULL)
			return NULL;
		else
			return ItemNode->value;
	}

	void InsertAtBeginning(T value) {

		Node* newNode = new Node();

		newNode->value = value;
		newNode->next = head;
		newNode->prev = NULL;

		if (head != NULL) {
			head->prev = newNode;
		}
		head = newNode;
		_Size++;
	}

	void InsertAfter(Node* head, T value) {

		Node* current = head;

		while (current != NULL)
		{
			if (current->value == 2) {
				Node* newNode = new Node();
				newNode->value = value;
				newNode->next = current->next;
				current->next = newNode;
			}

			current = current->next;
		}
		_Size++;
	}

	bool InsertAfter(int index, T value) {

		Node* prevNode = GetNode(index);

		if (prevNode != NULL) {
			InsertAfter(prevNode, value);
			return true;
		}
		else
			return false;
	}

	void InsertAtEnd(T value) {

		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;

		if (head == NULL) {
			newNode->prev = NULL;
			head = newNode;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newNode;
			newNode->prev = current;
		}
		_Size++;
	}

	Node* Find(T value) {

		Node* current = head;

		while (current != NULL) {
			if (current->value == value)
				return current;

			current = current->next;
		}

		return NULL;
	}

	void DeleteNode(Node*& NodeToDelete) {

		if (head == NULL || NodeToDelete == NULL) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode() {
		if (head == NULL) {
			return;
		}
		Node* temp = head;
		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		}
		delete temp;
		_Size--;
	}

	void DeleteLastNode() {

		if (head == NULL) {
			return;
		}

		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		Node* current = head;
		while (current->next->next != NULL)
		{
			current = current->next;
		}

		Node* temp = current->next;
		current->next = NULL;
		delete temp;
		_Size--;
	}

	int Size() {
		return _Size;
	}

	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	void Clear() {

		while (_Size > 0)
		{
			DeleteFirstNode();
		}
	}

	void  Reverse()
	{
		Node* current = head;
		Node* temp = nullptr;
		while (current != nullptr) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}

		if (temp != nullptr) {
			head = temp->prev;
		}
	}



	bool UpdateItem(int index, T NewValue) {

		Node* ItemNode = GetNode(index);

		if (ItemNode != NULL) {
			ItemNode->value = NewValue;
			return true;
		}
		else
			return false;
	}

	void PrintList() {

		Node* current = head;

		while (current != NULL)
		{
			cout << current->value << " ";
			current = current->next;
		}

		cout << "\n";
		delete current;
	}

};
