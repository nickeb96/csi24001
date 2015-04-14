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



#pragma once
#include <iostream>
#include <string>

#include "employee.h"

const int MAX_TABLES = 15;

/* Amount of options in each employee menu. */
const int MANAGER_NUM_OPTIONS = 8;
const int HOST_NUM_OPTIONS = 4;
const int WAIT_NUM_OPTIONS = 6;
const int COOK_NUM_OPTIONS = 7;

/* Each of the Employee's options. */
const std::string RESTAURANT_TITLE = "Wei's Place";

const std::string MANAGER_OPTIONS[MANAGER_NUM_OPTIONS] {
		"Hire Employee",
		"Fire Employee",
		"Update Employee Data",
		"Search for Employee",
		"Select Daily Staff",
		"Generate Daily Report",
		"Log Out",
		"Shut Down"
};

const std::string HOST_OPTIONS[HOST_NUM_OPTIONS] {
		"Display Empty Tables",
		"Assign Party Size",
		"Make Table Available",
		"Log Out"
};

const std::string WAIT_OPTIONS[WAIT_NUM_OPTIONS] {
		"Take Order",
		"Change Items In Order",
		"Delete Items In Order",
		"Generate Bill",
		"Display Occupied Tables",
		"Log Out"
};

const std::string COOK_OPTIONS[COOK_NUM_OPTIONS] {
		"Display Item Menu",
		"Change Item on Menu",
		"Delete Item on Menu",
		"Add Item to Menu",
		"View Orders To Be Completed",
		"Check Order Status",
		"Log Out"
};

class Restaurant
{
private:
	Employee mCurrentUser;

	void waitMenu();
	void hostMenu();
	void managerMenu();
	void cookMenu();
	int getInputBetween(int min, int max);

public:
	Restaurant();
	~Restaurant();


	void waitOperations();
	void hostOperations();
	void managerOperations();
	void cookOperations();



};

