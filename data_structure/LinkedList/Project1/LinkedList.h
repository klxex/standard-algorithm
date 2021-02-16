#pragma once
#include<iostream>

template<typename N>
class Node {
public:
	N value;
	Node<N>* next=nullptr;

};


template<typename N>
class LinkedList {

	Node<N>* head=nullptr;

public:
	void print_all();
	void add_First(N value);
	void add_Last();
	
	
};


template<typename N>
void LinkedList<N>::print_all() {
	Node<N>* temp = head;
	while (temp != nullptr) {
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
	
}

template<typename N>
void LinkedList<N>::add_First(N value) {
	if (head == nullptr) {
		head = new Node<N>();
		head->value = value;
		return;

	}
	Node<N>* temp = head;
	
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = new Node<N>();
	temp->next->value = value;


}
