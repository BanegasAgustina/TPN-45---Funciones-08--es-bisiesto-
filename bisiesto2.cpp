#include <iostream>
using namespace std;
bool EsBisiesto(int anio);
int main(){
	int an;
	string sn;
	cout<<"ingrese un anio";
	cin>>an;
	bool b=EsBisiesto( an);
	if(b==true){
		sn="NO";
	
	}
	if(b==false){
		sn="SI";
	}
	cout<<sn;
	return 0;
}
 bool EsBisiesto(int anio){
 	bool flag=true;
 	if (anio%4==0){
 		flag=false;
	 }
	 if (anio%400==0 || anio%100==0){
 		flag=false;
	 }
	
	 return flag;
 }