
#include "Punto.hpp"

//Constructores
Punto::Punto() {
	x = 0;
	y = 0;
}
Punto::Punto(double _x, double _y) {
	x = _x;
	y = _y;
}

//Getters
double Punto::getX() {
	return x;
}

double Punto::getY() {
	return y;
}


//Setters
void Punto::setX(double _x) {
	x = _x;
}

void Punto::setY(double _y) {
	y = _y;
}


//Otras cosas
double Punto::calculaDistancia(Punto p2) {
	return sqrt( (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) );
}

std::string Punto::muestraPunto() {
	return '(' + std::to_string(x) + ',' + std::to_string(y) + ')'
}