/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Square.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


//	Purpose: The purpose of this class is to represent a square type of shape.

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