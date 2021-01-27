#pragma once
#include <stdio.h>
#include <iostream>
#include <math.h>
#include<cmath>

using namespace std;

template <class T> class vect3d {
protected:
	T x;
	T y;
	T z;

public:
	vect3d(T x1=0, T y1=0, T z1=0) {
		x = x1;
		y = y1;
		z = z1;
	};

	void affiche() {
		cout << "x : " << x << "; y : " << y << "; z : " << z << endl;
	}
	

	vect3d(vect3d& v) {
		x = v.x;
		y = v.y;
		z = v.z;
	}

	vect3d somme(vect3d& v) {
		vect3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return s;
		cout << "X : " << s.x << "Y : " << s.y << "Z : " << s.z << endl;
	}

	vect3d difference(vect3d& v) {
		vect3d s;
		s.x = x - v.x;
		s.y = y - v.y;
		s.z = z - v.z;
		return s;
		cout << "X : " << s.x << "Y : " << s.y << "Z : " << s.z << endl;
	}

	vect3d scalaire(vect3d& v) {
		return x * v.x + y * v.y + z * v.z;
	}
	

	friend void coincide(vect3d vect1, vect3d vect2) {
		if ((vect1.x == vect2.x) && (vect1.y == vect2.y) && (vect1.z == vect2.z)) {
			cout << "Les deux vecteurs coincïdent" << endl;
		}
		else {
			cout << "Les deux vecteurs ne coincïdent pas" << endl;
		}
	}

	/*bool coincide(vect3d& v) {
		return (x == v.x && y == v.y && z == v.z);
	}*/
	


	


};