#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>

class Punto{
private:
	double x;
	double y;

public: 
	//constructores
	Punto();
	Punto(double _x, double _y);

	//metodos de accesso getters
	double getX();
	double getY();


	//modificadores setters
	void setX(double _x);
	void setY(double _y);

	//otras cositas
	double calculaDistancia(Punto p2);
	std::string muestraPunto();
};


#endif /* Punto_hpp */