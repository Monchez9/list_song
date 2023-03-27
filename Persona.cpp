// seccion de los include
#include "Persona.h"

using namespace std;

Persona::Persona(){

}
Persona::~Persona(){

}
//retorno "nombre de la calse"::"nombre de la funcion"(){}
void Persona::setCedula(int dato){
    this->cedula = dato;
}

int Persona::getCedula(){
    return this->cedula;
}

