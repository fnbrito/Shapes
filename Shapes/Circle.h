/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Circle.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


//	Purpose: The purpose of this class is to represent a shape of type circle.

#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
private:
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */
	
	/* ============= ATTRIBUTES ============ */

	float radius; ///<Used to store the circle's radius in centimeters. Must be bigger than 0.0.
	
	
	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */

	bool validateRadius(float radius);




public:
	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */

	/* ============== METHODS ============= */

	/* ------------ CONSTRUCTOR ------------ */
	Circle(std::string colour, float radius);
	Circle(void);
	Circle(const Circle& copyFrom);

	/* ------------ DESTRUCTOR ------------- */
	virtual ~Circle();

	/* ------------- OPERATOR -------------- */
	Circle operator+ (const Circle& op2);
	Circle operator* (const Circle& op2);
	const Circle& operator= (const Circle& op2);
	bool operator== (const Circle& op2);


	/* ------------- ACCESSOR -------------- */
	float GetRadius(void) const;

	/* -------------- MUTATOR -------------- */
	void SetRadius(float radiusInCentimeters);

	/* ----------- OTHER METHODS ----------- */
	void Show(void);
	virtual float Perimeter(void);
	virtual float Area(void);
	virtual float OverallDimension(void);
};

