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

	friend vect3d& operator+(vect3d vect1, vect3d vect2) {
		vect3d resultat;

		resultat.x = vect1.x + vect2.x;
		resultat.y = vect1.y + vect2.y;
		resultat.z = vect1.z + vect2.z;

		return resultat;
	}

	friend vect3d& operator-(vect3d vect1, vect3d vect2) {
		vect3d resultat;

		resultat.x = vect1.x - vect2.x;
		resultat.y = vect1.y - vect2.y;
		resultat.z = vect1.z - vect2.z;

		return resultat;
	}

	friend vect3d& operator*(vect3d vect1, vect3d vect2) {
		vect3d resultat;

		resultat.x = vect1.x * vect2.x;
		resultat.y = vect1.y * vect2.y;
		resultat.z = vect1.z * vect2.z;

		return resultat;
	}

	friend ostream& operator<<(std::ostream& os, const vect3d<T> v) {
		os << "x : " << v.x << ' '
			<< "; y : " << v.y << ' '
			<< "; z : " << v.z << ' ';
		return os;
	};
	
	
};





//Exercice 2
template <class T> class vect2d : public vect3d<T> {
	T x;
	T y;
public :
	vect2d(T xa = 0, T yb = 0) {
		x = xa;
		y = yb;
	}


	vect2d(vect2d& v) {
		x = v.x;
		y = v.y;
	}

	friend vect2d& operator+(vect2d vect1, vect2d vect2) {
		vect2d resultat;

		resultat.x = vect1.x + vect2.x;
		resultat.y = vect1.y + vect2.y;
		
		return resultat;
	}

	friend vect2d& operator-(vect2d vect1, vect2d vect2) {
		vect2d resultat;

		resultat.x = vect1.x - vect2.x;
		resultat.y = vect1.y - vect2.y;
		
		return resultat;
	}

	friend vect2d& operator*(vect2d vect1, vect2d vect2) {
		vect2d resultat;

		resultat.x = vect1.x * vect2.x;
		resultat.y = vect1.y * vect2.y;
		
		return resultat;
	}

	
	friend void coincide2(vect2d vect1, vect2d vect2) {
		if ((vect1.x == vect2.x) && (vect1.y == vect2.y)) {
			cout << "Les deux vecteurs coincïdent" << endl;
		}
		else {
			cout << "Les deux vecteurs ne coincïdent pas" << endl;
		}
	}

	void affiche2() {
		cout << "x : " << x << "; y : " << y << endl;
	}
};

//Exercice 3

template <class T> class tableau {
	int m_taille;
	T* vect;
public:
	tableau(int n) {
		m_taille = n;
		vect = new T[m_taille];
	}
	~tableau() {
		delete vect;
	}

	T& operator[](int);
};


template <class T> T& tableau<T>::operator[] (int i) {
	if ((i < 0) || (i > m_taille)) i = 0;
	return vect[i];
}