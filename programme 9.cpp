/*Ecrire un programme en C++ qui vérifie combien de fois une fonction « call » d ‘une
classe Test a été appelée à partir du programme principal, main.
Note : penser à utiliser une variable static.
*/
#include<iostream>
using namespace std;

class test {
public:
static int cnt;

void call(){
cnt++;   //valeure initiale =0
}
};

int test::cnt=0; //initialistaion de la variable cnt statique


int main(){ 
test ob;
int x;
for(int i=0;i<x;i++) {

ob.call();
}
cout<<"la fonction call est appelee "<<test::cnt<<" fois ";
   return 0; 
}