/*
Class: CSI-240-01
Assignment: FINAL PROJECT
Date Assigned: 3/17/15
Due Date: 4/24/15 11:00AM

Description:
A class for organizing table data for a restaurant program

Certification of Authenticity:
We certify that this is entirely our own work, except where we have given fully
documented references to the work of others. We understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
may, for the purpose of assessing this assignment:
-Reproduce this assignment and provide a copy to another member of
academic staff; and/or
-Communicate a copy of this assignment to a plagiarism checking service
(which may then retain a copy of this assignment on its database for
the purpose of future plagiarism checking)
*/


//   Author: Johnna Ferguson

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <iostream>
#include "menuItem.h"
using namespace std;

class LinkedList
{
private:
	struct Node
	{
		MenuItem mData;
		Node *mNext;
		
		Node()
		{
			mNext = NULL;
		}
		
		Node(MenuItem value)
		{
			mData = value;
			mNext = NULL;
		}
	};
	
	Node *mHead, *mTail;
	
public:

	const string SAVED_MENU = "menu.txt";

	LinkedList();
	~LinkedList();
	void display(); // one item per line, as in receipt
	void displayFull(); // displays all elements of menuItems, 
	                    // including description
	bool empty(); //returns true if the the list is empty
	MenuItem getItem(string itemName);
	bool insertInOrder(MenuItem data);
	bool insertInOrderNoRepeat(MenuItem data);
	bool isExist(string name); // helper for push without duplicates
	void loadData();
	MenuItem pop(); // just in case
	bool push(MenuItem item); //no duplicates
	bool pushOrder(MenuItem item); //allows duplicates
	bool remove(string name); // so the waiter can take something off an order
	void saveData();
	bool search(string name);
	void sort(); // sorts list by category and then price then name
	double subTotalOrder(); // sum before taxes and tip

	friend ofstream& operator<<(ofstream& output, LinkedList& obj);
	friend ifstream& operator>>(ifstream& input, LinkedList& obj);

};

#endif