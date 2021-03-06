// SDI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct timeType
{
	int hr;
	double min;
	int sec;
};

struct tourType
{
	string cityName;
	int distance;
	timeType travelTime;
};


void tourTypeOut(tourType rawTourType);
void tourTypeInAlt(tourType& newDestination);
tourType tourTypeIn();


int main()
{
	
	tourType destination;
	destination.cityName = "Nottingham";
	destination.distance = 130;

	destination.travelTime.hr = 3;
	destination.travelTime.min = 15.0;
	destination.travelTime.sec = 0;

	tourTypeOut(destination);


	//function that returns a value
	tourType newDestination = tourTypeIn();
	tourTypeOut(newDestination);

	//function that uses references instead
	tourType newDestination2;
	tourTypeInAlt(newDestination2);
	tourTypeOut(newDestination2);

	return 0;
}

//Output information stored in struct
void tourTypeOut(tourType rawTourType)
{
	cout << "City Name: " << rawTourType.cityName << endl;
	cout << "Distance: " << rawTourType.distance << " miles" << endl;
	cout << "Time: " << rawTourType.travelTime.hr << " hours, " << rawTourType.travelTime.min << " minutes, " << rawTourType.travelTime.sec << " seconds" << endl;
}


//Create a new variable of type tourType and capture data to insert.
tourType tourTypeIn()
{
	tourType newTourType;
	string cityNameIn;
	int distanceIn;
	int hrIn;
	double minIn;
	int secIn;

	cout << endl << "Please enter the city name: ";
	cin >> cityNameIn;
	
	cout << "Please enter the distance (miles): ";
	cin >> distanceIn;

	cout << "Please enter the travel time for this city (hh:mm:ss) " << endl << "Hours: ";
	cin >> hrIn;
	cout << "Minutes: ";
	cin >> minIn;
	cout << "Seconds: ";
	cin >> secIn;
	cout << endl;

	newTourType.cityName = cityNameIn;
	newTourType.distance = distanceIn;

	newTourType.travelTime.hr = hrIn;
	newTourType.travelTime.min = minIn;
	newTourType.travelTime.sec = secIn;

	return newTourType;
}


//alternative function to input data to struct that does not return a value and uses references instead

void tourTypeInAlt(tourType& newTourType)
{
	string cityNameIn;
	int distanceIn;
	int hrIn;
	double minIn;
	int secIn;
	cout << endl << "Please enter the city name: ";
	cin >> cityNameIn;

	cout << "Please enter the distance (miles): ";
	cin >> distanceIn;

	cout << "Please enter the travel time for this city (hh:mm:ss) " << endl << "Hours: ";
	cin >> hrIn;
	cout << "Minutes: ";
	cin >> minIn;
	cout << "Seconds: ";
	cin >> secIn;
	cout << endl;

	newTourType.cityName = cityNameIn;
	newTourType.distance = distanceIn;

	newTourType.travelTime.hr = hrIn;
	newTourType.travelTime.min = minIn;
	newTourType.travelTime.sec = secIn;
}
