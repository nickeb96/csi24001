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


//  Author: Johnna Ferguson and Danial Thomas

#include "restaurant.h"


Restaurant::Restaurant()
{
}


Restaurant::~Restaurant()
{
}


/*
* Pre: None
*
* Post: Displays the waiters menu
*
* Purpose: To display the waiters menu.
* 
* Author: Evan Nudd
*/
void Restaurant::waitMenu()
{
	system("cls");
	std::cout << RESTAURANT_TITLE << std::endl;
	for (int i = 0; WAIT_NUM_OPTIONS; i++)
	{
		std::cout << i << ") " << WAIT_OPTIONS[i] << std::endl;
	}
}



/*
* Pre: None
*
* Post: Displays the host menu
*
* Purpose: To display the hosts menu.
*
* Author: Evan Nudd
*/
void Restaurant::hostMenu()
{
	system("cls");
	std::cout << RESTAURANT_TITLE << std::endl;
	for (int i = 0; HOST_NUM_OPTIONS; i++)
	{
		std::cout << i << ") " << HOST_OPTIONS[i] << std::endl;
	}
}


/*
* Pre: None
*
* Post: Displays the manager menu
*
* Purpose: To display the managers menu.
*
* Author: Evan Nudd
*/
void Restaurant::managerMenu()
{
	system("cls");
	std::cout << RESTAURANT_TITLE << std::endl;
	for (int i = 0; MANAGER_NUM_OPTIONS; i++)
	{
		std::cout << i << ") " << MANAGER_OPTIONS[i] << std::endl;
	}
}


/*
* Pre: None
*
* Post: Displays the cook menu
*
* Purpose: To display the cooks menu.
*
* Author: Evan Nudd
*/
void Restaurant::cookMenu()
{
	system("cls");
	std::cout << RESTAURANT_TITLE << std::endl;
	for (int i = 0; COOK_NUM_OPTIONS; i++)
	{
		std::cout << i << ") " << COOK_OPTIONS[i] << std::endl;
	}
}


/*
* Pre: min value in inclusive, max value is exclusive
*
* Post: returns an int between the two value's entered (one digit)
*
* Purpose: To get a valid input.
*
* Author: Evan Nudd
*/
int Restaurant::getInputBetween(int min, int max)
{
	int selection = -1;
	std::string input;
	bool valid = false;

	do
	{
		std::getline(std::cin, input);
		selection = input[0]; // No menu go's to double digit so this ok.

		if (selection >= min && selection < max)
			valid = true;
	} while (!valid);

	return selection;
}


/*
* Pre: None
*
* Post: Acts upon the users choice of input for selected menu
*
* Purpose: to handle the user input for a particular employee.
*
* Author: Evan Nudd
*/
void Restaurant::waitOperations()
{
	waitMenu();
	int choice = getInputBetween(0, WAIT_NUM_OPTIONS);
	
	// act on the choice
	switch (choice)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
}


/*
* Pre: None
*
* Post: Acts upon the users choice of input for selected menu
*
* Purpose: to handle the user input for a particular employee.
*
* Author: Evan Nudd
*/
void Restaurant::hostOperations()
{
	hostMenu();
	int choice = getInputBetween(0, HOST_NUM_OPTIONS);

	// act on the choice
	switch (choice)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}


/*
* Pre: None
*
* Post: Acts upon the users choice of input for selected menu
*
* Purpose: to handle the user input for a particular employee.
*
* Author: Evan Nudd
*/
void Restaurant::managerOperations()
{
	managerMenu();

	int choice = getInputBetween(0, MANAGER_NUM_OPTIONS);

	// act on the choice
	switch (choice)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
}


/*
* Pre: None
*
* Post: Acts upon the users choice of input for selected menu
*
* Purpose: to handle the user input for a particular employee.
*
* Author: Evan Nudd
*/
void Restaurant::cookOperations()
{
	cookMenu();
	int choice = getInputBetween(0, COOK_NUM_OPTIONS);

	// act on the choice
	switch (choice)
	{
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	}
}

/*
* Pre: nothing
*
* Post: mCurrentUser is set
*
* Purpose: to login a user
*
* Author: Nick Boyle
*/
void Restaurant::login()
{
    ifstream loginFile;
    string username, password, temp;
    char c;
    bool done = false;
    
    cout << "Enter Username: ";
    getline(cin, username);
    
    system("cls");
    cout << "Enter password: ";
    
    while (!done)
    {
        c = _getch();
        
        if (c == '\r')
        {
            done = true;
        }
        else if (c == '\b')
        {
            if (password.length() > 0)
            {
                password.erase(password.length() - 1, 1);
                
                system("cls");
                cout << "Enter password: ";
                for (unsigned int i = 1; i < password.length(); i++)
                {
                    cout << '*';
                }
            }
        }
        else
        {
            password.append(1, c);
            cout << "*";
        }
    }
    
    loginFile.open(LOGIN_FILE_NAME);
    
    while (loginFile)
    {
        getline(loginFile, temp);
        
        if (temp == username)
        {
            getline(loginFile, temp);
            
            if (temp == password)
            {
                // handle setting current user
                
                cout << "Login successful\n";
                return;
            }
            else
            {
                cout << "Invalid password\n";
                return;
            }
        }
        else
        {
            getline(loginFile, temp);
        }
    }
    
    cout << "User does not exist\n";
}
