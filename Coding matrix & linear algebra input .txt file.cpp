#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int a,b,c,d,e,f,cd,fa,bd,ae,ad,x,y,selisihcdfa,selisihbdae,ax;
int main()
{
	ifstream buka; buka.open("test.txt");
	int nilai[6]; cout<<"Input Nilai Persamaan Linear 2 Variabel: \n";
for (int i=0; i<6; i++){
	buka>>nilai[i]; cout<<"Nilai ke["<<i+1<<"]: "<<nilai[i]<<endl;
}
	a=nilai[0];b=nilai[1];c=nilai[2];d=nilai[3];e=nilai[4];f=nilai[5];
if(a,b,c,d!=0){
	cout<<"\nPersamaan Linear Ke-1 = (ax + by = c)\n"<<"Persamaan Linear Ke-2 = (dx + ey = f)\n";
	cout<<"\nPersamaan Linear Ke-1 = "<<a<<"x + "<<b<<"y = "<<c<<"\nPersamaan Linear Ke-2 = "<<d<<"x + "<<e<<"y = " <<f;
	cout<<"\n\nPenyelesaian:"; cout<<"\n\nEliminasi Terhadap x:";
	ad=a*d; ae=a*e; cd=c*d; fa=f*a; bd=b*d, ae=a*e; ad=a*d; selisihcdfa=cd-fa; selisihbdae=bd-ae;
	cout<<"\n"<<a<<"x  "<<b<<"y = "<<c<<" | *"<<d<<"\n"<<d<<"x +  "<<e<<"y =  "<<f<<" | *"<<a;
	cout<<"\n_____________ -";
	cout<<"\n("<<ad<<")x + "<< + "(" <<bd<<")y= "<<cd; cout<<"\n("<<ad<<")x + "<< + "(" <<ae<<")y=  "<<fa;
	cout<<"\n_____________ - \n";
	cout<<"\t"<<bd-ae<<"y= "<<cd-fa<<"\n\t   y= "<<(selisihcdfa)/(selisihbdae); y=(selisihcdfa)/(selisihbdae);

	cout<<"\n\nEliminasi Terhadap y:"<<"\n"<<d<<"x +"<<e<<"y \t = "<<f;
	cout<<"\n"<<d<<"x +"<<e<<"("<<y<<")= "<<f<<"\n\tx= "<<(f-(e*y))/d<<"\n"; x=(f-(e*y))/d;
	cout<<"\nSehingga, nilai {x,y}= {"<<x<<","<<y<<"}\n";
}
	else if(a,b,c,d==0){cout<<"\nError, Karena a,b,d,e Sama Dengan 0\n"; 
}
buka.close();system("PAUSE");
}

