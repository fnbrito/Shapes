/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Square.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

/// 
/// \class Square
///
/// \brief The purpose of this class is to represent a square type of shape.
///
/// - class constants
/// - class data members (attributes) and their purpose
/// - any methods (whose body is actually found within this definition) - you would comment in a <i>Method Header Commenting</i> style (see Dog() below)
///
/// \author Filipe Brito, <i>7843808</i>
///
#pragma once
#include "Shape.h"
class Square :
	public Shape
{	
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */
private:
	/* ============= ATTRIBUTES ============ */

	float sideLength; ///< used as the side-length value. Must be bigger than 0.0

	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */

	bool validateSideLength(float sideLength);


	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */
public:

	/* ============== METHODS ============= */

	/* ------------ CONSTRUCTOR ------------ */
	Square();
	Square(std::string colour, float sideLength);
	
	/* ------------ DESTRUCTOR ------------- */
	~Square();

	/* ------------- ACCESSOR -------------- */
	float GetSideLength(void);
	
	/* -------------- MUTATOR -------------- */
	void SetSideLength(float sideLength);
	
	/* ----------- OTHER METHODS ----------- */
	void Show(void);
	float Perimeter(void);
	float Area(void);
	float OverallDimension(void);
};