#include "TreatmentStation.h"

TreatmentStation::TreatmentStation(int id, double x, double y) : Landmark(id, x, y)
{
}

string TreatmentStation::getColor()
{
	return "BLACK";
}
