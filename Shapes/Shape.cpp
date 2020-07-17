///
/// \brief To instantiate a new Shape object.
/// \details I don't know what to put here.
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

#include "Shape.h"



int validateName(std::string& newName)
{
	if (newName.length <= 50 && newName.length >= 0)
	{
		if ((newName == "Circle") || (newName == "Square"))
			name = newName;
		else
			name = "Unknown";

	}
}

int validateColour(std::string& colour)
{

}

Shape(std::string& name, std::string& colour)
{

}

Shape(void)
{

}

~Shape()
{

}

char* GetName(std::string& name)
{

}
char* GetColour(std::string& colour)
{

}

void SetName(std::string& name)
{

}
void SetColour(std::string& colour)
{

}
virtual void Perimeter(void)
{

}
virtual void Area(void)
{

}
virtual void OverallDimension(void)
{

}