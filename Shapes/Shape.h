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
	/* ------------- ATTRIBUTES ------------ */
	std::string name;	///< Used to store the name of the shape. It can either be Circle, Square or Unknown. If invalid, Unknown is used.
	std::string colour;	///< Used to store the colour of the shape. It can either be red, green, blue, yellow, purple, pink, orange or undefined. If invalid, undefined is used.
	int test;
	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */
	int validateName(char* name);
	int validateColour(char* colour);


	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */
public:

	/* ============== METHODS ============== */

	/* ------------ CONSTRUCTOR ------------ */
	Shape(std::string& name, std::string& colour);
	Shape();
	/* ------------- DESTRUCTOR ------------ */
	~Shape();

	/* -------------- ACCESSOR ------------- */
	char* GetName(std::string& name);
	char* GetColour(std::string& colour);

	/* -------------- MUTATOR -------------- */
	void SetName(std::string& name);
	void SetColour(std::string& colour);

	/* -------------- VIRTUAL -------------- */
	virtual void Perimeter(void);
	virtual void Area(void);
	virtual void OverallDimension(void);
};