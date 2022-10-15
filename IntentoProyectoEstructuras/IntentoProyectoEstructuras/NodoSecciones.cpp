#include "NodoSecciones.h"

NodoSecciones::NodoSecciones(Secciones *Dato, NodoSecciones *sig = NULL, NodoSecciones *ant = NULL) : Dato(Dato), siguiente(sig), anterior(ant){
	
}

