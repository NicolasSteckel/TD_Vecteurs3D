#include <stdio.h>
#include <iostream>
#include <math.h>
#include "Vecteur3D.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "");

	vect3d<float> vec1(5, 8, 9);
	vec1.affiche();

	vect3d<float> vec2(2, 1, 0);
	vec2.affiche();

	vec1.somme(vec2);
	vec1.difference(vec2);
	
	(vec1.scalaire(vec2)).affiche();
	coincide(vec1,vec2); 

	vect3d<float> vec3(1, 2, 3);
	vect3d<float> vec4(2, 6, 7);
	
	vec3 = vec1 + vec2;
	vec3.affiche();
	
	vec4 = vec1 * vec2;
	vec4.affiche();

	vec3 = vec1 - vec2;
	cout << vec3;

	//cout << vec3;

	//Exercice 2

	cout << "\n Exercice 2" << endl;

	vect2d<float> vecA(8, 9);
	vect2d<float> vecB(2, 1);
	vect2d<float> vecC(0, 0);

	vecC = vecA + vecB;
	vecC.affiche2();

	vecC = vecA - vecB;
	vecC.affiche2();

	vecC = vecA * vecB;
	vecC.affiche2();

	//Exercice 3
	
	tableau<vect2d<float>> tab1(3);
	tab1[0] = vecA;
	tab1[1] = vecB;



	return 0;
}
