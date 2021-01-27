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

	/*if (vec1.coincide(vec2))
		cout << "Les vecteurs vec1 et vec2 coincident " << endl;
	else
		cout << "Les vecteurs v1 et vec2 ne coincident pas " << endl;*/
	
	
	
}
