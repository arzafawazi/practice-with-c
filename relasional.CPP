#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
int a, b, c, d, e, f, x, y;

cout<<"Masukan Nilai X=";cin>>x;
cout<<"Masukan Niali y=";cin>>y;

a=x==y;
b=x!=y;
c=x>y;
d=x<y;
e=x>=y;
f=x<=y;

cout<<endl;                                                  
cout<<"hasil dari "<<x<<"=="<<y<<"="<<a<<endl;
cout<<"hasil dari "<<x<<"!="<<y<<"="<<b<<endl;
cout<<"hasil dari "<<x<<">"<<y<<"="<<c<<endl;
cout<<"hasil dari "<<x<<"<"<<y<<"="<<d<<endl;
cout<<"hasil dari "<<x<<">="<<y<<"="<<e<<endl;
cout<<"hasil dari "<<x<<"<="<<y<<"="<<f<<endl;

getch();


}
