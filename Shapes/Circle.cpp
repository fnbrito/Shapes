/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Circle.cpp
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

///
/// \brief To instantiate a new Circle object.
/// \details <b>Details</b>
///
/// This class is a child of Shape and inherits its attributes and methods.
/// This class creates a Circle object with a name and colour string objects inherited from the Shape class.
///
/// \author Filipe Brito, <i>7843808</i>
///

#include "Circle.h"

/* -------------- CONSTANT ------------- */
#define PI 3.1415926 ///<Constant value for <b>PI</b>.

///
///	\brief To validate if sent radius is valid as per the radius attribute standards.
///	\details <b>Details</b>
///	This method checks if the sent float is bigger than 0.0.
/// It returns true if value is valid and false otherwise.
///	\param radius  - <b>float</b> - the value to be validated
///
///	\return <b>True</b>: Value is valid
/// \return <b>False</b>: Value is invalid
///
/// \see SetRadius
///
bool Circle::validateRadius(float radius)
{
	if (radius >= 0.0)
		return true;
	else
		return false;
}


///
///	\brief To instantiate a new Circle object - given a color and a value for radius.
///	\details <b>Details</b>
///	This constructor takes a string object for the colour and a float for the radius.
///	The colour should either be red, green, blue, yellow, purple, pink, orange or undefined. Otherwise it will be set to "undefined".
///	The radius should be bigger than 0.0.
/// The name will be set to "Circle".
///	\param colour  - <b>std::string</b> - plain text with intended colour name
///	\param radius - <b>float</b> - value to be set in radius
///
///	\return As this is a <i>constructor</i> for the Circle class, nothing is returned
///
///	\see ~Circle()
///
Circle::Circle(std::string colour, float radius) : Shape((std::string)"Circle", colour)
{
	if (radius >= 0.0)
		this->radius = radius;
	else
		this->radius = 0.0;
}


///
///	\brief To instantiate a new Circle object - with default parameters.
///	\details <b>Details</b>
///	This constructor takes no arguments.
///	The name attribute will be set to "Circle", the color to "undefined", and radius to 0.0.
///
///	\param <b>Void</b>
///
///	\return As this is a <i>constructor</i> for the Circle class, nothing is returned
///
///	\see ~Circle()
///
Circle::Circle() : Shape()
{
	this->name = "Circle";
	this->colour = "undefined";
	this->radius = 0.0;
}


///
///	\brief To <i>destroy</i> a Circle object.
///	\details <b>Details</b>
///	Allocated memory for the object will be deallocated.
///
/// \param As this is a <i>destructor</i> no parameter is required.
///
///	\return As this is a <i>destructor</i> for the Circle class, nothing is returned.
///
///	\see Circle()
///
Circle::~Circle()
{
	printf("The circle is broken ...\n");
}


///
///	\brief This method returns the radius of the circle.
///	\details <b>Details</b>
///	Returns a float with the value of the radius attribute.
///
///	\param <b>Void</b>
///
///	\return <b>float</b> - float variable with the radius value
///
///	\see SetRadius
///
float Circle::GetRadius(void)
{
	return radius;
}


///
///	\brief Assigns the value of the radius attribute.
///	\details <b>Details</b>
///	This method checks if the value is valid and assigns it to the sideLength attribute.
/// If the value is invalid it does nothing.
///
///	\param radiusInCentimeters - <b>float</b> - value bigger than 0.0 to be assigned into radius.
///
///	\return <b>Void</b>
///
///	\see validateName
///
void Circle::SetRadius(float radiusInCentimeters)
{
	if (validateRadius(radiusInCentimeters))
	{
		radius = radiusInCentimeters;
	}
}


///
///	\brief Prints the object's attributes.
///	\details <b>Details</b>
///	This method prints the attributes in a formatted way.
/// Name, colour, radius, circumference and area are printed.
///
///	\param <b>Void</b>
///
///	\return <b>Void</b>
///
void Circle::Show(void)
{
	printf(
		"Shape Information\n"
		"Name		: %s\n"
		"Colour		: %s\n"
		"Radius		: %.2f cm\n"
		"Circumference	: %.2f cm\n"
		"Area		: %.2f square cm\n\n", name.c_str(), colour.c_str(), GetRadius(), Perimeter(), Area());
}

///
///	\brief Returns the Circumference of the object.
///	\details <b>Details</b>
///	This method calculates the circumference and returns it.
/// The calculation is:
///		2 * pi * radius
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Circumference value.
///
float Circle::Perimeter(void)
{
	return 2 * (float)PI * radius;
}

///
///	\brief Returns the area of the object.
///	\details <b>Details</b>
///	This method calculates the area and returns it.
/// The calculation is:
///		pi * radius^radius
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Area value.
///
float Circle::Area(void)
{
	return (float)PI * (radius * radius);
}

///
///	\brief Returns the diameter of the object.
///	\details <b>Details</b>
///	This method calculates the diameter and returns it.
/// The calculation is:
///		2 * radius
///
///	\param <b>Void</b>
///
///	\return <b>float</b> : Diameter value.
///
float Circle::OverallDimension(void)
{
	return 2 * radius;
}