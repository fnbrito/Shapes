/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Shape.cpp
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

///
/// \brief To instantiate a new Shape object.
/// \details <b>Details</b>
///
/// This class creates a Shape object with a name and colour string objects.
/// The attributes will be inherited to the children, in case a child object is created.
///
///
/// When it comes to commenting the body of your code, or commenting anything within
/// any of your source modules that you want DOxygen to ignore - simply use
/// standard C++ comments
///
///
/// \author Filipe Brito, <i>7843808</i>
///


#include "Shape.h"


///
///	\brief To validate if sent string is valid as per the name attribute standards.
///	\details <b>Details</b>
///	This method checks if the sent string is either Circle, Square or Unknown.
///	\param name  - <b>std::string</b> - the name to be validated
///
///	\return <b>True</b>: Name is valid
/// \return <b>False</b>: Name is invalid
///
/// \see SetName
///
bool Shape::validateName(std::string name)
{
	if (name.length() <= 50)
	{
		if ((name == "Circle")
			|| (name == "Square")
			|| (name == "Unknown"))
		{
			return true;
		}
	}
	return false;
}


///
///	\brief To validate if sent string is valid as per the colour attribute standards.
///	\details <b>Details</b>
///	This method checks if the sent string is either red, green, blue, yellow, purple, pink, orange or undefined.
///	\param colour - <b>std::string</b> - plain text with colour to be validated
///
///	\return <b>True</b>: Name is valid.
///	\return <b>False</b>: Name invalid.
///
///	\see SetColour
///
bool Shape::validateColour(std::string colour)
{
	if (name.length() <= 10)
	{
		if ((colour == "red")
			|| (colour == "green")
			|| (colour == "blue")
			|| (colour == "yellow")
			|| (colour == "purple")
			|| (colour == "pink")
			|| (colour == "orange")
			|| (colour == "undefined"))
		{
			return true;
		}
	}
	return false;
}

///
///	\brief To instantiate a new Shape object - given a name and a colour.
///	\details <b>Details</b>
///	This constructor takes two strings, the first is the name and the second the colour.
///	The name should either be Circle, Square and Unknown. Otherwise it will be set to "Unknown".
///	The colour should either be red, green, blue, yellow, purple, pink, orange or undefined. Otherwise it will be set to "undefined".
///	\param name  - <b>std::string</b> - plain text with intended name
///	\param colour - <b>std::string</b> - plain text with intended colour
///
///	\return As this is a <i>constructor</i> for the Shape class, nothing is returned
///
///	\see ~Shape()
///
Shape::Shape(std::string name, std::string colour)
{
	if (name.length() <= 50)
	{
		if ((name == "Circle")
			|| (name == "Square")
			|| (name == "Unknown"))
		{
			this->name = name;
		}
		else
		{
			this->name = "Unknown";
		}
	}
	else
	{
		this->name = "Unknown";
	}

	if (colour.length() <= 10)
	{
		if ((colour == "red")
			|| (colour == "green")
			|| (colour == "blue")
			|| (colour == "yellow")
			|| (colour == "purple")
			|| (colour == "pink")
			|| (colour == "orange")
			|| (colour == "undefined"))
		{
			this->colour = colour;
		}
		else
		{
			this->colour = "undefined";
		}
	}
	else
	{
		this->colour = "undefined";
	}


}

///
///	\brief To instantiate a new Shape object - with default parameters.
/// 
///	\details <b>Details</b>
///	This constructor takes no arguments.
///	The name attribute will be set to "Unknown".
///	The colour attribute will be set as "undefined".
///
/// \param As this is a default <i>constructor</i> no parameter is required.
///
///	\return As this is a <i>constructor</i>, nothing is returned.
///
///	\see ~Shape()
///
Shape::Shape(void)
{
	this->name = "Unknown";
	this->colour = "undefined";
}

///
///	\brief To <i>destroy</i> a Shape object.
///	\details <b>Details</b>
///	Allocated memory for the object will be deallocated.
///
/// \param As this is a <i>destructor</i> no parameter is required.
///
///	\return As this is a <i>destructor</i> for the Shape class, nothing is returned.
///
///	\see Shape()
///
Shape::~Shape()
{
}

///
///	\brief This method returns the name of the shape.
///	\details <b>Details</b>
///	Returns a string object with the name of the shape.
///	\param <b>Void</b>
///
///	\return <b>std::string</b> - string object with the name attribute
///
///	\see SetName
///
std::string Shape::GetName(void)
{
	return this->name;
}


///
///	\brief This method returns the colour of the shape.
///	\details <b>Details</b>
///	Returns a string object with the colour of the shape.
///	\param <b>Void</b>
///
///	\return <b>std::string</b> - string object with the colour attribute
///
///	\see SetColour
///
std::string Shape::GetColour(void)
{
	return this->colour;
}


///
///	\brief Assigns the name attribute of a Shape object.
///	\details <b>Details</b>
///	This method checks if the name is valid and assigns it to the name attribute.
/// If the value is invalid it does nothing.
///
///	\param name  - <b>std::string</b> - plain text, name to be set as name attribute
///
///	\return <b>True</b>: Name is valid.
/// \return <b>False</b>: Name is invalid.
///
///	\see validateName
///
void Shape::SetName(std::string name)
{
	if (validateName(name))
	{
		this->name = name;
	}
}


///
///	\brief Assigns the colour of a Shape object.
///	\details <b>Details</b>
///	This method checks if the colour is valid and assigns it to the colour attribute.
/// If the value is invalid it does nothing.
///
///	\param colour  - <b>std::string</b> - plain text, colour to be set as colour attribute
///
///	\return <b>Void</b>
///
///	\see GetColour
///
void Shape::SetColour(std::string colour)
{
	if (validateColour(colour))
	{
		this->colour = colour;
	}
}