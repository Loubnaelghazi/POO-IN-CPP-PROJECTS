#include<iostream>
using namespace std;

//ex 1

/*Écrivez un programme qui définit une classe appelée MyClass avec un constructeur par
défaut et un destructeur définis par l'utilisateur.
Définissez à la fois le constructeur et le destructeur en dehors de la classe.
Les deux fonctions membres généreront un libre choix du texte sur la sortie standard.
Créez un objet d'une classe dans la fonction main.*/

class MyClass{

public:
MyClass();
~MyClass();
};

//definiton en dehors du constructeur
MyClass::MyClass(){

    cout<<"hey i am the default constructor\n";
}
//definiotn en dehors du destructeur
MyClass::~MyClass(){
    cout<<"hey i am the destructor\n";
}



int main(){
MyClass object;
//creation d un objet

return 0;
}
