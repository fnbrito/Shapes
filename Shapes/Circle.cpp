/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Circle.cpp
 * PROJECT      : OOP - Assignment 7
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


///
/// \class Circle
///
/// \brief To represent shape of type circle.
/// \details <b>Details</b>
///
/// This class is a child of Shape and inherits its attributes and methods.
/// This class creates a Circle object with a name and colour string objects inherited from the Shape class.
///
/// \author Filipe Brito, <i>7843808</i>
///

#include "Circle.h"

/* -------------- CONSTANT ------------- */
#define PI 3.1415926 ///< Constant value for <b>PI</b>.


///
/// \brief To validate if sent radius is valid as per the radius attribute standards.
/// \details <b>Details</b>
/// This method checks if the sent float is bigger than 0.0.
/// It returns true if value is valid and false otherwise.
/// \param radius  - <b>float</b> - the value to be validated
///
/// \return <b>True</b>: Value is valid
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
/// \brief To <i>instantiate</i> a new Circle object - given a color and a value for radius.
/// \details <b>Details</b>
/// This constructor takes a string object for the colour and a float for the radius.
/// The colour should either be red, green, blue, yellow, purple, pink, orange or undefined. Otherwise it will be set to "undefined".
/// The radius should be bigger than 0.0.
/// The name will be set to "Circle".
/// \param colour  - <b>std::string</b> - plain text with intended colour name
/// \param radius - <b>float</b> - value to be set in radius
///
/// \return As this is a <i>constructor</i> for the Circle class, nothing is returned
///
/// \see ~Circle()
///
Circle::Circle(std::string colour, float radius) : Shape("Circle", colour)
{
	if (radius >= 0.0)
		this->radius = radius;
	else
		this->radius = 0.0;
}


///
/// \brief To <i>instantiate</i> a new Circle object - with default parameters.
/// \details <b>Details</b>
/// This constructor takes no arguments.
/// The name attribute will be set to "Circle", the color to "undefined", and radius to 0.0.
///
/// \param Void
///
/// \return As this is a <i>constructor</i> for the Circle class, nothing is returned
///
/// \see ~Circle()
///
Circle::Circle(void) : Shape("Circle", "undefined")
{
	this->radius = 0.0;
}


///
/// \brief To <i>instantiate</i> a new Circle object - copying from another circle object.
/// \details <b>Details</b>
/// This constructor takes an object of type circle as argument.
/// The name, colour and radius attributes will be set to the same as the object referenced.
///
/// \param const Circle& - copyFrom : object to be copied into <i>current</i> object.
///
/// \return As this is a <i>constructor</i> for the Circle class, nothing is returned
///
/// \see ~Circle()
///
Circle::Circle(const Circle& copyFrom) // copy constructor
{
	this->SetName(copyFrom.GetName());
	this->SetColour(copyFrom.GetColour());
	this->SetRadius(copyFrom.GetRadius());
}


///
/// \brief To <i>destroy</i> a Circle object.
/// \details <b>Details</b>
/// Allocated memory for the object will be deallocated.
///
/// \param As this is a <i>destructor</i> no parameter is required.
///
/// \return As this is a <i>destructor</i> for the Circle class, nothing is returned.
///
/// \see Circle()
///
Circle::~Circle()
{
	printf("The circle is broken ...\n");
}


///
/// \brief Overloading of operator '<i>+</i>'.
/// \details <b>Details</b>
/// Allows the sum of Circle objects.
/// The resultant object takes up the color of the left-hand operand and the radii of both operands are added together.
///
/// \param const Circle& - op2 : constant reference to a Circle object (<i>RHS operand</i>).
///
/// \return <b>Circle : A circle object with the sum of <i>LHS operand</i> and the <i>RHS operand</i>.</b>
///
/// \see Circle()
///
Circle Circle::operator+ (const Circle& op2)
{
	Circle temp;
	temp.SetColour(this->GetColour());
	temp.SetName(this->GetName());
	temp.SetRadius(this->GetRadius() + op2.GetRadius());
	return temp;
}


///
/// \brief Overloading of operator '<i>*</i>'.
/// \details <b>Details</b>
/// Allows the multiplication of Circle objects.
/// The resultant circle takes up the colour of the right-hand operand and the radii of the operands are multiplied.
///
/// \param const Circle& - op2 : constant reference to a Circle object (<i>RHS operand</i>).
///
/// \return <b>Circle : A circle object with the multiplication of <i>LHS operand</i> and the <i>RHS operand</i>.</b>
///
/// \see Circle()
///
Circle Circle::operator* (const Circle& op2)
{
	Circle temp;
	temp.SetName(this->GetName());
	temp.SetColour(op2.GetColour());
	temp.SetRadius(this->GetRadius() * op2.GetRadius());
	return temp;
}


///
/// \brief Overloading of operator '<i>=</i>'.
/// \details <b>Details</b>
/// Allows the assignment of Circle objects.
///
/// \param const Circle& - op2 : constant reference to a Circle object (<i>RHS operand</i>).
///
/// \return <b>const Circle& : A circle object copied from <i>RHS operand</i> to be assigned into the <i>LHS operand</i>.</b>
///
/// \see Circle()
///
const Circle& Circle::operator= (const Circle& op2)
{
	this->SetRadius(op2.GetRadius());
	this->SetName(op2.GetName());
	this->SetColour(op2.GetColour());
	return *this;
}


///
/// \brief Overloading of operator '<i>==</i>'.
/// \details <b>Details</b>
/// Allows the comparison of Circle objects.
/// Compares if the radius and colour members of two circles are the same.
///
/// \param const Circle& - op2 : constant reference to a Circle object (<i>RHS operand</i>).
///
/// \return <b>TRUE : The objects are considered equal.</b>
///			<b>FALSE: The objects are considered unequal.</b>
///
/// \see Circle()
///
bool Circle::operator== (const Circle& op2)
{
	bool retCode;
	if ((this->GetRadius() == op2.GetRadius()) &&
		(this->GetColour() == op2.GetColour()))
	{
		retCode = true;
	}
	else
	{
		retCode = false;
	}

	return (retCode);
}


///
/// \brief This method returns the radius of the circle.
/// \details <b>Details</b>
/// Returns a float with the value of the radius attribute.
///
/// \param Void
///
/// \return <b>float</b> - float variable with the radius value
///
/// \see SetRadius
///
float Circle::GetRadius(void) const
{
	return radius;
}


///
/// \brief Assigns the value of the radius attribute.
/// \details <b>Details</b>
/// This method checks if the value is valid and assigns it to the sideLength attribute.
/// If the value is invalid it does nothing.
///
/// \param radiusInCentimeters - <b>float</b> - value bigger than 0.0 to be assigned into radius.
///
/// \return Void
///
/// \see validateName
///
void Circle::SetRadius(float radiusInCentimeters)
{
	if (validateRadius(radiusInCentimeters))
	{
		radius = radiusInCentimeters;
	}
}


///
/// \brief Prints the object's attributes.
/// \details <b>Details</b>
/// This method prints the attributes in a formatted way.
/// Name, colour, radius, circumference and area are printed.
///
/// \param Void
///
/// \return Void
///
void Circle::Show(void)
{
	printf(
		"Shape Information\n"
		"Name		: %s\n"
		"Colour		: %s\n"
		"Radius		: %.2f cm\n"
		"Circumference	: %.2f cm\n"
		"Area		: %.2f square cm\n\n", GetName().c_str(), GetColour().c_str(), GetRadius(), Perimeter(), Area());
}


///
/// \brief Returns the Circumference of the object.
/// \details <b>Details</b>
/// This method calculates the circumference and returns it.
/// The calculation is:
///		2 * pi * radius
///
/// \param Void
///
/// \return <b>float</b> : Circumference value.
///
float Circle::Perimeter(void)
{
	return 2 * (float)PI * radius;
}


///
/// \brief Returns the area of the object.
/// \details <b>Details</b>
/// This method calculates the area and returns it.
/// The calculation is:
///		pi * radius^radius
///
/// \param Void
///
/// \return <b>float</b> : Area value.
///
float Circle::Area(void)
{
	return (float)PI * (radius * radius);
}


///
/// \brief Returns the diameter of the object.
/// \details <b>Details</b>
/// This method calculates the diameter and returns it.
/// The calculation is:
/// 2 * radius
///
/// \param Void
///
/// \return <b>float</b> : Diameter value.
///
float Circle::OverallDimension(void)
{
	return 2 * radius;
}