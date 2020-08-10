/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Square.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

///
/// \class Square
///
/// \brief To represent shape of type Square.
/// \details <b>Details</b>
///
/// This class is a child of Shape and inherits its attributes and methods.
/// This class creates a Square object with a name and colour string objects inherited from the Shape class.
///
/// \author Filipe Brito, <i>7843808</i>
///
#include "Square.h"


///
/// \brief To validate if sent side-length value is valid as per the radius attribute standards.
/// \details <b>Details</b>
/// This method checks if the sent float is bigger than 0.0.
/// It returns true if value is valid and false otherwise.
/// \param sideLength  - <b>float</b> - the value to be validated
///
/// \return <b>True</b>: Value is valid
/// \return <b>False</b>: Value is invalid
///
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
/// \brief To instantiate a new Square object - given a colour and a value for side-length.
/// \details <b>Details</b>
/// This constructor takes a string object for the colour and a float for the side-length.
/// The colour should either be red, green, blue, yellow, purple, pink, orange or undefined. Otherwise it will be set to "undefined".
/// The sideLength should be bigger than 0.0.
/// The name will be set to "Square".
/// \param colour  - <b>std::string</b> - plain text with intended colour name
/// \param sideLength - <b>float</b> - value to be set in side-length
///
/// \return As this is a <i>constructor</i> for the Square class, nothing is returned
///
/// \see ~Square()
///
Square::Square(std::string colour, float sideLength) : Shape("Square", colour)
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
/// \brief To instantiate a new Square object - with default parameters.
/// \details <b>Details</b>
/// This constructor takes no arguments.
/// The name attribute will be set to "Square", the color to "undefined", and side-length to 0.0.
///
/// \param Void
///
/// \return As this is a <i>constructor</i> for the Square class, nothing is returned
///
/// \see ~Square()
///
Square::Square(void) : Shape("Square", "undefined")
{
	sideLength = 0.0;
}


///
/// \brief To <i>instantiate</i> a new Square object - copying from another square object.
/// \details <b>Details</b>
/// This constructor takes an object of type square as argument.
/// The name, colour and radius attributes will be set to the same as the object referenced.
///
/// \param const Square& - copyFrom : object to be copied into <i>current</i> object.
///
/// \return As this is a <i>constructor</i> for the Square class, nothing is returned
///
/// \see ~Square()
///
Square::Square(const Square& copyFrom)
{
	this->SetName(copyFrom.GetName());
	this->SetColour(copyFrom.GetColour());
	this->sideLength = copyFrom.GetSideLength();
}


///
/// \brief To <i>destroy</i> a Square object.
/// \details <b>Details</b>
/// Allocated memory for the object will be deallocated.
///
/// \param As this is a <i>destructor</i> no parameter is required.
///
/// \return As this is a <i>destructor</i> for the Square class, nothing is returned.
///
/// \see Square()
///
Square::~Square()
{
	printf("The square is squished ...\n");
}


///
/// \brief Overloading of operator '<i>+</i>'.
/// \details <b>Details</b>
/// Allows the sum of Square objects.
/// The resultant square takes the colour of the left-hand operand and the side length of the operands are added.
///
/// \param const Square& - op2 : constant reference to a Square object (<i>RHS operand</i>).
///
/// \return <b>Square : A square object with the sum of <i>LHS operand</i> and the <i>RHS operand</i>.</b>
///
/// \see Square()
///
Square Square::operator+ (const Square& op2)
{
	Square temp;
	temp.SetColour(this->GetColour());
	temp.SetName(this->GetName());
	temp.SetSideLength(this->GetSideLength() + op2.GetSideLength());
	return temp;
}


///
/// \brief Overloading of operator '<i>*</i>'.
/// \details <b>Details</b>
/// Allows the multiplication of Square objects.
/// The resultant square takes the colour of the right-hand operand and the side length of the operands are multiplied.
///
/// \param const Square& - op2 : constant reference to a Square object (<i>RHS operand</i>).
///
/// \return <b>Square : A square object with the multiplication of <i>LHS operand</i> and the <i>RHS operand</i>.</b>
///
/// \see Square()
///
Square Square::operator* (const Square& op2)
{
	Square temp;
	temp.SetColour(op2.GetColour());
	temp.SetName(this->GetName());
	temp.SetSideLength(this->GetSideLength() * op2.GetSideLength());
	return temp;
}


///
/// \brief Overloading of operator '<i>=</i>'.
/// \details <b>Details</b>
/// Allows the assignment of Square objects.
///
/// \param const Square& - op2 : constant reference to a Square object (<i>RHS operand</i>).
///
/// \return <b>const Square& : A square object copied from <i>RHS operand</i> to be assigned into the <i>LHS operand</i>.</b>
///
/// \see Square()
///
const Square& Square::operator= (const Square& op2)
{
	this->SetSideLength(op2.GetSideLength());
	this->SetName(op2.GetName());
	this->SetColour(op2.GetColour());
	return *this;
}


///
/// \brief Overloading of operator '<i>==</i>'.
/// \details <b>Details</b>
/// Allows the comparison of Square objects.
/// Compares if the side length and colour members of two squares are the same.
///
/// \param const Square& - op2 : constant reference to a Square object (<i>RHS operand</i>).
///
/// \return <b>TRUE : The objects are considered equal.</b>
///			<b>FALSE: The objects are considered unequal.</b>
///
/// \see Square()
///
bool Square::operator== (const Square& op2)
{
	bool retCode;
	if ((this->GetSideLength() == op2.GetSideLength()) &&
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
/// \brief This method returns the side-length of the square.
/// \details <b>Details</b>
/// Returns a float with the value of the sideLength attribute.
///
/// \param Void
///
/// \return <b>float</b> - float variable with the side-length value
///
/// \see SetRadius
///
float Square::GetSideLength(void) const
{
	return sideLength;
}


///
/// \brief Assigns the value of the side-length attribute.
/// \details <b>Details</b>
/// This method checks if the value is valid and assigns it to the sideLength attribute.
/// If the value is invalid it does nothing.
///
/// \param sideLength - <b>float</b> - value bigger than 0.0 to be assigned into sideLength.
///
/// \return Void
///
/// \see validateName
///
void Square::SetSideLength(float sideLength)
{
	if (validateSideLength(sideLength))
	{
		this->sideLength = sideLength;
	}
}


///
/// \brief Prints the object's attributes.
/// \details <b>Details</b>
/// This method prints the attributes in a formatted way.
/// Name, colour, side-length, perimeter and area are printed.
///
/// \param Void
///
/// \return Void
///
void Square::Show(void)
{
	printf(
		"Shape Information\n"
		"Name		: %s\n"
		"Colour		: %s\n"
		"Side-Length	: %.2f cm\n"
		"Perimeter	: %.2f cm\n"
		"Area		: %.2f square cm\n\n", GetName().c_str(), GetColour().c_str(), GetSideLength(), Perimeter(), Area());
}


///
/// \brief Returns the perimeter of the object.
/// \details <b>Details</b>
/// This method calculates the perimeter and returns it.
/// The calculation is:
/// 4 * sideLength
///
/// \param Void
///
/// \return <b>float</b> : Perimeter value.
///
float Square::Perimeter(void)
{
	return 4 * sideLength;
}


///
/// \brief Returns the area of the object.
/// \details <b>Details</b>
/// This method calculates the area and returns it.
/// The calculation is:
///		sideLength^sideLength
///
/// \param Void
///
/// \return <b>float</b> : Area value.
///
float Square::Area(void)
{
	return sideLength * sideLength;
}


///
/// \brief Returns the side-length of the object.
/// \details <b>Details</b>
/// This method returns the side-length.
///
/// \param Void
///
/// \return <b>float</b> : Side-length value.
///
float Square::OverallDimension(void)
{
	return sideLength;
}