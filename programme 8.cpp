/*En utilisant la notion de virtual donner une possible déclaration de l'hiérarchie de
classes suivante :
La classe Media possède deux méthodes « void imprimer() ; char *id() », et un attribut
titre, par contre tous les autres classes possèdent aussi ces propres attributs et
méthodes qu ‘il faut ajouter selon la spécificité de chaque sous classe.*/
#include<iostream>
using namespace std;

class media {
protected:
string titre;
public:
virtual void imprimer()=0; //fct virtuelle pure
virtual char *id()=0;

};
/////////////////////////////////////////////////////
class livre:public media{
private:
string name,auteur;
int price=125;
int pages=300;
public:
void imprimer(){ 
cout<<"les pages de livres a imprimer sont :";
cout<<pages<<"pages\n";
cout<<"le prix est\n ";
cout<<price<<"dh\n";
}
};
/////////////////////////////////////////////////////////////
class presse :public media{
protected:
int page=30;
int prix=10;
public:
void imprimer(){
cout<<"les pages de livres a imprimer sont :";
cout<<page<<"pages\n";
cout<<"le prix est\n ";
cout<<prix<<"dh\n";
}
};
///////////////////////////////////////////////////////////
class audio :public media{
protected:
int volume;
int id;
public:
char *id(){
}
};
////////////////////////////////////
class cd:public audio{
public:
char *id(){


}


};
/////////////////////////////////

class cassette :public audio{
public:
char *id(){


}

};
////////////////////////////////
class disque :public audio{
protected:
string name;
public:
char *id(){


}
};
/////////////////////////////////////////
class magazine :public presse{
    protected:
    
public:
void imprimer(){

}


};
//////////////////////////////////////////
class journal :public presse{

void imprimer(){

}


};

/////////////////////////////////////////////////

class revue :public presse
{

void imprimer(){

}
};

////////////////////////////////////////////////////////////////
















