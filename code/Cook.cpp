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



#include "Cook.h"

/*
Constructor
-Author: Toby Ingmire
-Prototype: Cook::Cook() : Employee()
-Pre: None
-Post: Initialize the cook variables
-Purpose: To initialize the variables of
cook.
*/
Cook::Cook() : Employee()
{

}

/*
Deconstructor
-Author: Toby Ingmire
-Prototype: Cook::~Cook()
-Pre: None
-Post: To deconstruct the cook
-Purpose: To deconstruct the cook
*/
Cook::~Cook()
{

}

/*
Get Employee Type
-Author: Evan Nudd
-Prototype: int Cook::getEmployeeType()
-Pre: None
-Post: Return employee type of Cook
-Purpose: To return the cooks employee
type
*/
int Cook::getEmployeeType()
{
	return EMPLOYEE_TYPE::COOK;
}

