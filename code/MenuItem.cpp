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

#include "MenuItem.h"

menuItem::menuItem(string name, double pr, string desc, int cat)
{
   itemName = name;
	price = pr;
	description = desc;
	category = cat;
}

int menuItem::compareTo(menuItem item)
{
   if (category == item.getCategory() && price == item.getPrice())
      if (itemName.compare(item.itemName) < 0)
         return -1;			//the original item is alphabetically after the parameter item
      else if (itemName.compare(item.itemName) > 0)
         return 1;			//the original item is alphabetically before the parameter item
      else
         return 0;			//the original item is the same as the parameter item

      return -2;
}

string menuItem::display()			//returns name and price of an item on 1 line
{
   return itemName + " $" + price;
}

string menuItem::displayFull()			//returns name and price of an item on 1 line and the item's description on the next
{
	return itemName + " $" + price + "\n" + description;
}

Category menuItem::getCategory()
{
	return category;
}

string menuItem::getDescription()
{
	return description;
}
	
string menuItem::getName()
{
	return itemName;
}
	
double menuItem::getPrice()
{
	return price;
}

void menuItem::operator=(const menuItem& rhs)			//sets all variables in the lhs menuItem to the values of the rhs ones
{
	this.itemName = rhs.itemName;
	this.price = rhs.price;
	this.description = rhs.description;
	this.category = rhs.category;
}

bool menuItem::operator==(const menuItem& rhs)			//checks if the name of the lhs menuItem == the name of the rhs one
{
	if (this.itemName == rhs.itemName)
		return true;
		
	return false;
}

void menuItem::setCategory(Category newCat)
{
	category = newCat;
}

void menuItem::setDescription(string newDesc)
{
	description = newDesc;
}
	
void menuItem::setName(string newName)
{
	itemName = newName;
}

void menuItem::setPrice(double newPrice)
{
	price = newPrice;
}
