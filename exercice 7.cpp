#include <iostream>
#include <math.h>
using namespace std;
/*Réaliser une classe C++ "vecteur3d" permettant de manipuler des vecteurs à 3
composantes (de type float). On y prévoira :
 un constructeur, avec des valeurs par défaut (0),
 une fonction d’affichage des 3 composantes du vecteur, sous la forme : (x, y, z)
 une fonction permettant d’obtenir la somme de 2 vecteurs ;
 une fonction permettant d’obtenir le produit scalaire de 2 vecteurs.
 une fonction coincide permettant de savoir si 2 vecteurs ont mêmes
composantes.
 une fonction qui renvoie la norme du vecteur
une fonction nommée normax permettant d’obtenir, parmi deux vecteurs, celui qui a la
plus grande norme. On prévoira trois situations :
1. le résultat est renvoyé par valeur ;
2. le résultat est renvoyé par adresse, l’argument étant également transmis par
adresse.
3. le résultat est renvoyé par référence, l’argument étant également transmis par
référence.
*/
class vecteur3d{
public:
    float x,y,z ;

    vecteur3d(){  //donner des valeurs aux composants des vecteurs
    cout<<"entrer la valeure de x "<<endl;
    cin>>x;
      cout<<"entrer la valeure de y "<<endl;
    cin>>y;
      cout<<"entrer la valeure de z "<<endl;
    cin>>z;
    }
    void affichage(){
    cout<<"votre vecteur est :"<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }

float norme(){
float norme;
norme=sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
return norme;
}
     friend void somme(vecteur3d ob1,vecteur3d ob2);
     friend float produit(vecteur3d ob1,vecteur3d ob2);
     friend void composants(vecteur3d ob1,vecteur3d ob2);
     friend float normax(vecteur3d ob1,vecteur3d ob2);

};

void somme(vecteur3d ob1,vecteur3d ob2){
   float somme=0;
   cout<<"LA SOMME DES DEUX VECTEURS EST : \n";
   cout<<"("<<ob1.x+ob2.x<<","<<(ob1.y+ob2.y)<<","<<(ob1.z+ob2.z)<<") ";

}

float produit(vecteur3d ob1,vecteur3d ob2){
float prod=1;
cout<<"le produit des vecteurs est: \n";
prod=((ob1.x)*(ob2.x))+((ob1.y)*(ob2.y))+((ob1.z)*(ob2.z));
return prod;
}

void coincide(vecteur3d ob1,vecteur3d ob2){
if(ob1.x== ob2.x &&ob1.y ==ob2.y &&ob1.z==ob2.z)
  cout<<"les deux vecteurs ont les memes composants\n";
else
cout<<"les 2 vecteurs sont differents \n";

}
float normax(vecteur3d ob1,vecteur3d ob2){ //pR VAleur
if(ob1.norme()<ob2.norme()){
cout<<"la norme la plus grande est "<<endl;
return ob2.norme();
}
else if(ob1.norme()>ob2.norme())
{
cout<<"la norme la plus grande est "<<endl;
return ob1.norme();

}
else{
  cout<<"les deux normes sont egaux \n";
}
     }


int main()
{
    cout<<"votre premier vecteur :\n";
  vecteur3d ob1;
  cout<<"votre deuxieme vecteur :\n";
  vecteur3d ob2;

  ob1.affichage();
  ob2.affichage();
 coincide(ob1,ob2);
cout<<endl;

    somme(ob1,ob2);
    cout<<endl;
    cout<<produit(ob1,ob2)<<endl;
cout<<"la norme de votre vecteur 1 est :\n";
     cout<<ob1.norme()<<endl;
cout<<"la norme de votre vecteur 2 est :\n";
     cout<<ob2.norme()<<endl;
     cout<<normax(ob1,ob2);
    return 0;
}


















