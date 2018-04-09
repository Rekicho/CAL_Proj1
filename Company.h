#pragma once

#include "Landmark.h"
#include "Graph.h"
#include "Truck.h"

class Company
{
private:
	Graph<Landmark*> map;
	vector<Landmark*> Garages;
	vector<Landmark*> TreatmentStations;
	vector<Landmark*> FullContainers;
	vector<Truck*> Trucks;

	bool relaxGarbage(Vertex<Landmark*> *v, Vertex<Landmark*> *w, double weight);
public:
	Company(Graph<Landmark*> m);
	Graph<Landmark*> getMap();
	vector<Landmark*> getGarages();
	vector<Landmark*> getTreatmentStations();
	vector<Landmark*> getFullContainers();
	vector<Truck*> getTrucks();
	void addGarage(Landmark* l);
	void addTreatmentStation(Landmark* l);
	void addFullContainer(Landmark* l);
	void addTruck(Truck* t);
	void removeFullContainer(Landmark* l);
	void removeTruck(Truck* t);
	void showMap() const;
	void Trata_fich_roads(string text_line);
	void read_files();
	void Trata_fich_nodes(string text_lines);
	void fixIndex();
	vector<Landmark*> sendTruck(Truck* truck);
};