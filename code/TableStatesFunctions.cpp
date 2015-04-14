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




#include "restaurant.h"

/*
Pre: table data in file
Post: table data, including orders, is loaded to tables
Purpose: to recover data lost during power outage
*/
void Restaurant::restoreTableStates()
{
	ifstream fin(TABLE_STATES);
	string junk;
	int numSeats, numDiners;
	int index = 0;

	if (!fin.fail())
	{
		while ((!fin.eof()) && (index < NUM_OF_TABLES))
		{
			fin >> mTables[index].getOrders()
				>> junk
				>> numSeats
				>> numDiners;
			getline(fin, junk);
			index++;
		}
	}
	else
	{
		cout << "Saved Menu Not Found\n";
	}

	fin.close();
}

/*
Pre: a linked list of menu items
Post: menu item data is saved to file
Purpose: to save restaurant menu or table orders to file
*/
void Restaurant::saveTableStates()
{
	ofstream fout(TABLE_STATES);

	for (int i = 0; i < NUM_OF_TABLES; i++)
	{
		fout << mTables[i].getOrders();
		fout << "#Table" << i + 1 << " ";
		fout << mTables[i].getNumberOfSeats() << " ";
		fout << mTables[i].getSeatsOccupied() << " " << endl;
	}
	fout.close();
}