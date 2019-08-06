// Alumno: Noel Mu;oz Ramirez
// Universidad Nacional
// Profesor: Maikol Gusman
// 06/08/2019





#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H
#include "LibroCalificaciones.cpp"
#include<iostream>
#include<sstream>
using namespace std;

class LibroCalificaciones {
private:  
	string nomCur;
	int nota;
	string ontenerRangoLetra();
	
public:
	LibroCalificaciones(){
		nomCur=" ";
		nota=0;
	}

	LibroCalificaciones(string nC, int n){
		nomCur=nC;
		nota=n;
	}
    ~LibroCalificaciones(){}	
	
	void setNomCur(string nC){
		nomCur=nC;
	}
	
	void setNota(int n){
		nota=n;
	}
	
	string getNomCur(){
		return nomCur;
	}
	
	int getNota(){
		return nota;
	}
	
///////////////////////////////////////	
	
	string obteneRangoLetra(){
		if(nota<=90){
			return "-A-";
		}else{
			if(nota<=80){
				return "-B-";
			}else{
				if(nota<=70){
					return "-C-";
				}else{
					if(nota<=60){
						return "-D-";
					}else{
						return "-F-";
					}
				}
			}
		}
	}
	
	/*string obtenerMensaje(){
		if(obtenerRangoLetra()=="-A-"){
			return 
		}
		
		
		
	}*/
	
};

#endif

