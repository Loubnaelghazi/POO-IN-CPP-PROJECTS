/*Écrire un programme en C++ qui définit une classe shape avec un constructeur qui
donne une valeur à la largeur et à la hauteur. Ils définissent deux sous-classes triangle
et rectangle, qui calculent l'aire de la zone de forme(). Dans l'ensemble, définir deux
variables un triangle et un rectangle, puis appelez la fonction area() dans ces deux
classes.*/

#include<iostream>
using namespace std;

class Shape{
protected:
 static int  longueur;
 static int largeur;
public:

Shape(int l,int larg){
longueur=l;
largeur=larg;

}
~Shape(){
 
}
};

//sous classe
class  rectangle :public Shape
{
   
public:
rectangle(int l,int larg):Shape(l,larg){
}
float area(){
    float area=0;
cout<<"the area of yur rectangle is \n";
area=largeur*largeur;
return area;
}
    
};

class triangle:public Shape
{

   
public:
triangle(int l,int larg):Shape(l,larg){

}
 float area(){
   cout<<"the area of yur rectangle is \n" ;
    return longueur*largeur;
 }   
};




int main(){
rectangle ob1(10,10);
triangle ob2(10,30);

cout<<ob1.rectangle::area();
cout<<ob2.triangle::area();
    return 0;
}