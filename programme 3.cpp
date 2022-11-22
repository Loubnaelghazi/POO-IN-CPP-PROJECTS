/*Effectuer les opérations arithmétiques sur des données
complexes à l'aide d'une classe et d'un objet. Le programme
doit demander la partie réelle et imaginaire de deux nombres
complexes et afficher les parties réelle et imaginaire de
l’opération demandée.*/

#include<iostream>
#include<math.h>
using namespace std;

class operation{
public:
float real,img ;

operation(){
    
cout<<"la partie reelle est :";
cin>>real;
cout<<"la partie imaginaire est :";
cin>>img;


}
friend void addition(operation ob,operation ob1);  //friend functions pour parametres les objets
friend void produit (operation ob,operation ob1);
friend void soustraction(operation ob,operation ob1);
friend void division(operation ob,operation ob1);
friend void egalite(operation ob,operation ob1);
};


void addition(operation ob,operation ob1){

cout<<"la somme des deux nombres est :\n";
cout<<ob.real+ob1.real<<"+"<<ob.img+ob1.img<<"i"<<endl;

}
void soustraction(operation ob,operation ob1){
cout<<"la souatraction des deux nombres est :\n";
cout<<ob.real-ob1.real<<"+"<<ob.img-ob1.img<<"i"<<endl;

}
 void produit (operation ob,operation ob1){
cout<<"le produit des deux nombres est :\n";
cout<<(ob.real*ob1.real)-(ob.img*ob.img)<<"+"<<(ob.real*ob1.img)+(ob.img*ob1.real)<<"i"<<endl;
 }

 void division(operation ob,operation ob1){
cout<<"la division des deux nombres est :\n";

cout<<((ob.real*ob1.real)+(ob.img*ob.img))/(pow(ob1.real,2)+pow(ob1.img,2))<<"+"<<((ob1.real*ob.img)-(ob.real*ob1.img))/(pow(ob1.real,2)+pow(ob1.img,2))<<"i"<<endl;

 }
void egalite(operation ob,operation ob1){
if(ob.real==ob1.real&&ob.img==ob1.img)
{
cout<<"les deux nombres complexes sont egaux\n";
}
else{
    cout<<"les deux nombres complexes sont differents \n";
}
}

int main(){

    cout<<"veuillez saisir les 2 nombres complexes \n";
    cout<<"votre premier nombre complexe:";
operation ob;
cout<<"votre deuxieme nombre complexe:";
operation ob1;

char x;
cout<<"quelle operation arithmetique souhaitez vous traitez ?\n";
cin>>x;

switch (x)
{
    case '+':
    addition(ob,ob1);
    break;

case '-':
    soustraction(ob,ob1);
    break;
case '*':
    produit(ob,ob1);
    break;
    case '/':
    division(ob,ob1);
    break;
 case '=':
    egalite(ob,ob1);
    break;
default:
cout<<"veuillez choisir une operation ARITHMETIQUE  adequate !!! \n";
    break;
}


    return 0;
}



