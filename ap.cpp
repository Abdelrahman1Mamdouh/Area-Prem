#include <iostream>
using namespace std;

int aRec(int lung1,int larg1){
int area;
area=lung1*larg1;
cout<<area;
return area;

}

int premRec(float lung,float larg){
float prem;
prem= 2*(lung+larg);
cout<<prem;
return prem;
}

int aTri(float H,float B){
float area;
area=(H*B)/2;
cout<<area;
return area;
}

int premTri(float a,float b,float c){
float prem;
prem=a+b+c;
cout<<prem;
return prem;
}

int premCir(float r){
float prem;
prem=2*3.14*r;
cout<<prem;
return prem;
}

int aCir(float R){
float area;
area=3.14*(R*R);
cout<<area;
return area;
}





int main(int argc, char** argv) {

string choice;
string Achoice;
float lung1,larg1;
float lung,larg;
float r,R;
float a,b,c;
float H,B;


cout<<"what do you want to calculate?"<<endl<<"1-area"<<endl<<"2-perimeter"<<endl;
cin>>choice;

if(choice=="1"){

cout<<"area of?"<<endl<<"1-triangle"<<endl<<"2-rectangle"<<endl<<"3-Circle"<<endl;
cin>>Achoice;


if(Achoice=="1"){

cout<<"enter the Height: ";
cin>>H;

cout<<"enter the Base lenght: ";
cin>>B;

aTri(H,B);
}

if(Achoice=="2"){
	cout<<"enter the lenght: ";
	cin>>lung1;
	
	cout<<"enter the width: ";
	cin>>larg1;
	
	aRec(lung1,larg1);
	}
	
	
if(Achoice=="3"){
	cout<<"enter the radius: ";
	cin>>R;
	
	aCir(R);
}
	

}


if(choice=="2"){
	
 cout<<"perimeter of?"<<endl<<"1-triangle"<<endl<<"2-rectangle"<<endl<<"3-Circle"<<endl;
 cin>>Achoice;

if(Achoice=="1"){
	cout<<"enter the lenght of side A: ";
	cin>>a;
	
	cout<<"enter the lenght of side B: ";
	cin>>b;
	
	cout<<"enter the lenght of side C: ";
	cin>>c;
	
	premTri(a,b,c);
}

if(Achoice=="2"){
	cout<<"enter the lenght: ";
	cin>>lung;
	
	cout<<"enter the width: ";
	cin>>larg;
	
	premRec(lung,larg);
}

if(Achoice=="3"){
	cout<<"enter the radius: ";
	cin>>r;
	
	premCir(r);
}
}




return 0;
}