/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : myShape.cpp
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 * DESCRIPTION	: This is the test harness
 *	source. This file drives the usage of the
 *	Circle and Square classes, getting input
 *	from the user and instantiating objects with
 *	that input.
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


#include <stdio.h>
#include <stdlib.h>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"


// local function prototypes
int		getColour(std::string& buffer);
float	getFloat(void);


int main(void)
{
	//variable definition
	float radius = 0.0;
	float sideLength = 0.0;
	std::string colour = "";
	Circle* shape1 = NULL;
	Square* shape2 = NULL;

	printf("Let's create a new circle.\n");
	getColour(colour); // Prompts the user and gets the colour.
	printf("And now the radius.\n");
	radius = getFloat(); // Prompts the user and gets the radius.

	shape1 = new Circle(colour, radius); // instantiates an object of class Circle with the input and assigns to variable

	printf("Let's create a new square.\n"); // Prompts the user and gets the colour.
	getColour(colour);
	printf("And now the side-length: "); // Prompts the user and gets the side-length.
	sideLength = getFloat();

	shape2 = new Square(colour, sideLength); // instantiates an object of class Square with the input and assigns to variable

	shape1->Show();
	shape2->Show();

	delete shape1;
	delete shape2;

	return 0;
}


/*
FUNCTION NAME:	getFloat
DESCRIPTION:	This function gets input from the user and makes sure
				the input is of type float.
PARAMETERS:		void
RETURN VALUES:	-1.00: Non-recognized number
				number: number input
*/
float getFloat(void)
{
	char	record[121] = { 0 };	/* record stores the string */
	float 	number = 0.00;

	printf("Type it in: ");
	/* use fgets() to get a string from the keyboard */
	fgets(record, sizeof(record), stdin);

	/*  extract the number from the string; sscanf() returns
		a number corresponding with the number of items it
		found in the string */
	if (sscanf_s(record, "%f", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		 * the system, set number to -1.00 */
		number = -1.00;
	}

	return number;
}


/*
FUNCTION NAME:	getColour
DESCRIPTION:	This function gets input from the user and makes sure
				the input is formatted as a string.
PARAMETERS:		std::string& buffer: string object to store the string to
RETURN VALUES:	-1: Non-recognized input
				 0: success
*/
int getColour(std::string& buffer)
{
	char	record[121] = { 0 };	/* record stores the string */
	int		retCode = 0;		/* success code */

	printf("Type in its color: ");
	/* use fgets() to get a string from the keyboard */
	fgets(record, sizeof(record), stdin);

	/*  extract the number from the string; sscanf() returns
		a number corresponding with the number of items it
		found in the string */
	if (sscanf_s(record, "%s", record, 120) != 1)
	{
		/* if the user did not enter input recognizable by
		 * the system, set retCode to -1 */
		retCode = -1;
	}
	buffer = record;
	return retCode;
}