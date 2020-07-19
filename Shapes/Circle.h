/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Circle.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/


//	Purpose: The purpose of this class is to represent a circle type of shape.

#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
	/* ===================================== */
	/*                PRIVATE                */
	/* ===================================== */
private:
	
	/* ============= ATTRIBUTES ============ */

	float radius; ///<Used to store the circle's radius in centimeters. Must be bigger than 0.0.
	
	
	/* ============== METHODS ============== */

	/* ------------- VALIDATOR ------------- */

	bool validateRadius(float radius);



	/* ===================================== */
	/*                PUBLIC                 */
	/* ===================================== */
public:

	/* ============== METHODS ============= */

	/* ------------ CONSTRUCTOR ------------ */
	Circle(std::string colour, float radius);
	Circle();

	/* ------------ DESTRUCTOR ------------- */
	~Circle();

	/* ------------- ACCESSOR -------------- */
	float GetRadius(void);

	/* -------------- MUTATOR -------------- */
	void SetRadius(float radiusInCentimeters);
	void Show(void);

	/* ----------- OTHER METHODS ----------- */
	float Perimeter(void);
	float Area(void);
	float OverallDimension(void);
};

