/*Programme 1 :
Ecrire un programme en C++ avec une classe mère et une classe fille héritée. Les deux
doivent avoir une méthode void display() qui affiche un message (différent pour la mère
et la fille). En gros, définir la fille et appelez la méthode display (), utiliser cette classe
fille dans la méthode main.
*/
#include<iostream>
using namespace std;

class mere{

public:
void display(){
cout<<"hello beutiful\n";

}
};

class fille : public mere {

public:
void display(){
cout<<"hey\n";
}




};

int main(){

fille x;
x.fille::display();
x.mere::display();   //affichage de deux msgs differents a partir de l objet x de la classe fille.






    return 0;
}
