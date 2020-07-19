/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Square.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

///
/// \brief To instantiate a new Square object.
/// \details <b>Details</b>
///
/// This class is a child of Shape and inherits its attributes and methods.
/// This class creates a Square object with a name and colour string objects inherited from the Shape class.
///
/// \author Filipe Brito, <i>7843808</i>
///
#include "Square.h"

///
///	\brief To validate if sent side-length value is valid as per the radius attribute standards.
///	\details <b>Details</b>
///	This method checks if the sent float is bigger than 0.0.
/// It returns true if value is valid and false otherwise.
///	\param sideLength  - <b>float</b> - the value to be validated
///
///	\return <b>True</b>: Value is valid
/// \return <b>False</b>: Value is invalid
///
///	\see sideLength
/// \see SetSideLength
///
bool Square::validateSideLength(float sideLength)
{
	if (sideLength >= 0.0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

///
///	\brief To instantiate a new Square object - given a colour and a value for side-length.
///	\details <b>Details</b>
///	This constructor takes a string object for the colour and a float for the side-length.
///	The colour should either be red, green, blue, yellow, purple, pink, orange or undefined. Otherwise it will be set to "undefined".
///	The sideLength should be bigger than 0.0.
/// The name will be set to "Square".
///	\param colour  - <b>std::string</b> - plain text with intended colour name
///	\param sideLength - <b>float</b> - value to be set in side-length
///
///	\return As this is a <i>constructor</i> for the Square class, nothing is returned
///
///	\see ~Square()
///
Square::Square(std::string colour, float sideLength) : Shape((std::string)"Square", colour)
{
	if (sideLength >= 0.0)
	{
		this->sideLength = sideLength;
	}
	else
	{
		this->sideLength = 0.0;
	}
}


///
///	\brief To instantiate a new Square object - with default parameters.
///	\details <b>Details</b>
///	This constructor takes no arguments.
///	The name attribute will be set to "Circle", the color to "undefined", and side-length to 0.0.
///
///	\param <b>Void</b>
///
///	\return As this is a <i>constructor</i> for the Square class, nothing is returned
///
///	\see ~Square()
///
Square::Square() : Shape()
{
	name = "Square";
	colour = "undefined";
	sideLength = 0.0;
}

///
///	\brief To <i>destroy</i> a Square object.
///	\details <b>Details</b>
///	Allocated memory for the object will be deallocated.
///
/// \param As this is a <i>destructor</i> no parameter is required.
///
///	\return As this is a <i>destructor</i> for the Square class, nothing is returned.
///
///	\see Square()
///
Square::~Square()
{
	printf("The square is squished ...\n");
}


///
///	\brief This method returns the side-length of the square.
///	\details <b>Details</b>
///	Returns a float with the value of the sideLength attribute.
///
///	\param <b>Void</b>
///
///	\return <b>float</b> - float variable with the side-length value
///
/// \see sideLength
///	\see SetRadius
///
float Square::GetSideLength(void)
{
	return sideLength;
}


///
///	\brief Assigns the value of the side-length attribute.
///	\details <b>Details</b>
///	This method checks if the value is valid and assigns it to the sideLength attribute.
/// If the value is invalid it does nothing.
///
///	\param sideLength - <b>float</b> - value bigger than 0.0 to be assigned into sideLength.
///
///	\return <b>Void</b>
///
/// \see name
///	\see validateName
///
void Square::SetSideLength(float sideLength)
{
	if (validateSideLength(sideLength))
	{
		this->sideLength = sideLength;
	}
}


///
///	\brief Prints the object's attributes.
///	\details <b>Details</b>
///	This method prints the attributes in a formatted way.
/// Name, colour, side-length, perimeter and area are printed.
///
///	\param <b>Void</b>
///
///	\return <b>Void</b>
///
void Square::Show(void)
{
	printf(
		"Shape Information\n"
		"Name		: %s\n"
		"Colour		: %s\n"
		"Side-Length	: %.2f cm\n"
		"Perimeter	: %.2f cm\n"
		"Area		: %.2f square cm\n\n", name.c_str(), colour.c_str(), GetSideLength(), Perimeter(), Area());
}

///
///	\brief Returns the perimeter of the object.
///	\details <b>Details</b>
///	This method calculates the perimeter and returns it.
/// The calculation is:
///		4 * sideLength
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Perimeter value.
///
float Square::Perimeter(void)
{
	return 4 * sideLength;
}

///
///	\brief Returns the area of the object.
///	\details <b>Details</b>
///	This method calculates the area and returns it.
/// The calculation is:
///		sideLength^sideLength
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Area value.
///
float Square::Area(void)
{
	return sideLength * sideLength;
}

///
///	\brief Returns the side-length of the object.
///	\details <b>Details</b>
///	This method returns the side-length.
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Side-length value.
///
float Square::OverallDimension(void)
{
	return sideLength;
}