/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Square.h
 * PROJECT      : OOP - Assignment 7
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


//	Purpose: The purpose of this class is to represent a shape of type square.

#pragma once
#include "Shape.h"
class Square :
	public Shape
{
private:
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */

	/* ============= ATTRIBUTES ============ */

	float sideLength; ///< used as the side-length value. Must be bigger than 0.0


	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */

	bool validateSideLength(float sideLength);

public:
	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */

	/* ============== METHODS ============= */

	/* ------------ CONSTRUCTOR ------------ */
	Square(void);
	Square(std::string colour, float sideLength);
	Square(const Square& copyFrom);

	/* ------------ DESTRUCTOR ------------- */
	virtual ~Square();

	/* ------------- OPERATOR -------------- */
	Square operator+ (const Square& op2);
	Square operator* (const Square& op2);
	const Square& operator= (const Square& op2);
	bool operator== (const Square& op2);


	/* ------------- ACCESSOR -------------- */
	float GetSideLength(void) const;
	
	/* -------------- MUTATOR -------------- */
	void SetSideLength(float sideLength);
	
	/* ----------- OTHER METHODS ----------- */
	void Show(void);
	virtual float Perimeter(void);
	virtual float Area(void);
	virtual float OverallDimension(void);
};