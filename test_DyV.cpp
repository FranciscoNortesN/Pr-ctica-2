#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main(){
	vector<int> a{1,2,3,4,5,6,7};
	vector<double> b{0.1,2.3,4.5,6.7,8.9};
	vector<char> c{'a','b','c','d','e','f','g','h','i'};
	cout<<"el vector a está compuesto por 1,2,3,4,5,6,7\nbuscamos el 3 el cual está en: "<<BusquedaBinaria(3,a,0,a.size()-1)<<endl;
	cout<<"este otro está compuesto por 0.1,2.3,4.5,6.7,8.9\nbuscamos el 0.1, el cual está en: "<<BusquedaBinaria(0.1,b,0,b.size()-1)<<endl;
	cout<<"el último está compuesto por a,b,c,d,e,f,g,h,i\nbuscamos la i, la cual está en: "<<BusquedaBinaria('i',c,0,c.size()-1)<<endl;
	vector<int> d{7,6,5,4,3,2,1};
	vector<double> e{9.8,7.6,5.4,3.2,1.0};
	vector<char> f{'i','h','g','f','e','d','c','b','a'};
	cout<<"el vector a está compuesto por 7,6,5,4,3,2,1\nbuscamos el 3 el cual está en: "<<BusquedaBinaria_INV(3,d,0,d.size()-1)<<endl;
	cout<<"este otro está compuesto por 9.8,7.6,5.4,3.2,1.0\nbuscamos el 1.0, el cual está en: "<<BusquedaBinaria_INV(1.0,e,0,e.size()-1)<<endl;
	cout<<"el último está compuesto por i,h,g,f,e,d,c,b,a\nbuscamos la i, la cual está en: "<<BusquedaBinaria_INV('i',f,0,f.size()-1)<<endl;
	return 0;
}
