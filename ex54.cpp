#include <iostream>
#include<set>
using namespace std;

bool indice(set<int> s,int x){        //declaration fonction de type bool
   set<int>::iterator it=s.begin();    
  bool b=false;                         //initialisation d'un variable par la valeure false
   for(it =s.begin(); it != s.end(); it++){  //parcour de la liste cherchant la valeur x
  if(*it==x)
    b=true;}


return b ;     //returner la valeur bolean
}




int main()
{
 int i ;
 int val;
    set<int> s;   // declaration de la list

   set<int>::iterator it=s.begin();
    for (i=1;i<=100;i++){  // boucle pour remplir la liste de 1 ? 100

      s.insert(i);}    // insertion dans la list

  for(it =s.begin(); it != s.end(); it++){

    cout<<*it<<"-";}
   cout<<endl;
  cout<<"entrer la valeur chercher"<<endl;
  cin>>val;
  cout<<"element trouve=1 || element n'est pas trouve =0"<<endl;

  cout<<"resultat est "<<indice(s,val);

    return 0;
}
