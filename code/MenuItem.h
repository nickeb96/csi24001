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


//  Author: RJ Robbins

#include <iostream>			//remove #includes and namespace as needed, they're for my own use before integrating files
#include <string>

using namespace std;

struct menuItem
{
private:

   string
      description,
      itemName;
   double
      price;
   enum Category {
      appetizer, entree, dessert, beverage
   };
   Category
      category;

   //====================

public:

   menuItem(string name, double pr, string desc, int cat);
   int compareTo(menuItem item);
   string display();
   string displayFull();
   Category getCategory();
   string getDescription();
   string getName();
   double getPrice();
   void operator=(const menuItem& rhs);
   bool operator==(const menuItem& rhs);
   void setCategory(Category newCat);
   void setDescription(string newDesc);
   void setName(string newName);
   void setPrice(double newPrice);
};