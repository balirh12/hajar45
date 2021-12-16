#include <iostream>
#include <list>
#include <string>

using namespace std;
int main(){
	// initialisation 
    int a=0,i=0,nbr;
    cout<<"combien d'entier tu veux ajouter?"<<endl;
    cin>>a;
    list <int> numbers;
    list <int>:: iterator it;
    it = numbers.begin();
    for (i=0;i<a;i++){ // la boucle
        cout<<"entrer numero" <<i <<endl;
        cin>>nbr;
         numbers.insert(it, nbr);
         it++;
    }
     numbers.sort();

    for (it;it!=numbers.end();it++){
        cout<<*it<<endl;
    }
   return 0;
}
