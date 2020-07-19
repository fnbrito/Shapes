/*+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+,
 * FILE         : Circle.h
 * PROJECT      : OOP - Assignment 4
 * PROGRAMMER   : Filipe Brito
 * FIRST VERSION: 2020-07-17
 *+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-*/

/// 
/// \class Circle
///
/// \brief The purpose of this class is to represent a circle type of shape.
///
/// - class constants
/// - class data members (attributes) and their purpose
/// - any methods (whose body is actually found within this definition) - you would comment in a <i>Method Header Commenting</i> style (see Dog() below)
///
/// \author Filipe Brito, <i>7843808</i>
///
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

	float radius; ///<Used to store the circle's radius in centimeters.
	
	
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

