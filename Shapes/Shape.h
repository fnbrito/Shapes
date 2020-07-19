/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Shape.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

/// 
/// \class Shape
///
/// \brief The purpose of this class is to represent generic and specific types of shapes.
///
///
/// - class constants
/// - class data members (attributes) and their purpose
/// - any methods (whose body is actually found within this definition) - you would comment in a <i>Method Header Commenting</i> style (see Dog() below)
///
/// When it comes to commenting the body of your code, or commenting anything within
/// any of your source modules that you want DOxygen to ignore - simply use
/// standard C++ comments
///
///
/// \author Filipe Brito, <i>7843808</i>
///
#pragma once


#include <string>


class Shape
{
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */
private:

	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */
	bool validateName(std::string name);
	bool validateColour(std::string colour);



	/* ===================================== */
	/*               PROTECTED               */
	/* ===================================== */

protected:
	/* ------------- ATTRIBUTES ------------ */
	std::string name;	///< Used to store the name of the shape. It can either be Circle, Square or Unknown. If invalid, Unknown is used.
	std::string colour;	///< Used to store the colour of the shape. It can either be red, green, blue, yellow, purple, pink, orange or undefined. If invalid, undefined is used.



	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */
public:

	/* ============== METHODS ============== */

	/* ------------ CONSTRUCTOR ------------ */
	Shape(std::string name, std::string colour);
	Shape();

	/* ------------- DESTRUCTOR ------------ */
	~Shape();

	/* -------------- ACCESSOR ------------- */
	std::string GetName(void);
	std::string GetColour(void);

	/* -------------- MUTATOR -------------- */
	void SetName(std::string name);
	void SetColour(std::string colour);

	/* ------------ PURE VIRTUAL ----------- */
	virtual float Perimeter(void) = 0;
	virtual float Area(void) = 0;
	virtual float OverallDimension(void) = 0;
};