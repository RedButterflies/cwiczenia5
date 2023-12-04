#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include "Dictionary.h"

using namespace std;
pair<int,int> duplikat(vector<int>&s)
{
    map<int,int> mapa;
    map<int,int>::iterator it;
    vector<int>::iterator it1;
    for(it1=s.begin();it1!=s.end();it1++)
    {
        mapa.insert(make_pair(*it1,0));
    }
    for(it1=s.begin();it1!=s.end();it1++)
    {
        if(mapa.count(*it1))
        {
            mapa.find(*it1)->second++;
        }
    }
    int zduplikowana;
    int sumaUnikat =0 ;
    for(it=mapa.begin();it!=mapa.end();it++)
    {
        if(it->second==2)
        {
            zduplikowana = it->first;
        }
        else
        {
            sumaUnikat +=it->first;
        }
    }
    pair<int,int> wynik;
    wynik.first = zduplikowana;
    wynik.second = sumaUnikat;


    cout<<"\nZduplikowany element: "<<wynik.first<<"\n Suma unikatowych elementow: "<<sumaUnikat<<endl;
    return wynik;

}
template <typename T>
T funkcja(set<T>setA, set<T>setB)
{
    set<T>tylkoWA;
    set<T>tylkoWB;
    set_difference(setA.begin(),setA.end(),setB.begin(),setB.end(),insert_iterator(tylkoWA,tylkoWA.begin()));
    set_difference(setB.begin(),setB.end(),setA.begin(),setA.end(),insert_iterator(tylkoWB,tylkoWB.begin()));
    cout<<"ZbiorA: "<<endl;
    typename set<T>::iterator it1;
    for(it1=setA.begin();it1!=setA.end();it1++)
    {
        cout<<*it1<<",";
    }
    cout<<endl;
    cout<<"ZbiorB: "<<endl;
    for(it1=setB.begin();it1!=setB.end();it1++)
    {
        cout<<*it1<<",";
    }
    cout<<endl;





    cout<<"Elementy znajdujace sie tylko w zbiorze A: "<<endl;
    typename set<T>::iterator it;
    for(it=tylkoWA.begin();it!=tylkoWA.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    cout<<"Elementy znajdujace sie tylko w zbiorze B: "<<endl;
    for(it=tylkoWB.begin();it!=tylkoWB.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;

}
char funkcjaB (string napisA, string napisB)
{
    map<char,int>mapaA;
    map<char,int>mapaB;

    for(char & i : napisA)
    {
        mapaA.insert(make_pair(i,0));

    }
    for(char & i : napisB)
    {
        mapaB.insert(make_pair(i,0));

    }

    for(char & i : napisA)
    {
       if(mapaA.count(i))
       {
           mapaA.find(i)->second++;
       }

    }
    for(char & i : napisB)
    {
       if(mapaB.count(i))
       {
           mapaB.find(i)->second++;
       }

    }

    map<char,int>::iterator it;
    char dodatkowy;
    for(it=mapaB.begin();it!=mapaB.end();it++)
    {
        if(mapaA.count(it->first) && mapaA.find(it->first)->second != mapaB.find(it->first)->second)
        {
            dodatkowy = it->first;
        }
        else if(!mapaA.count(it->first))
        {
            dodatkowy = it->first;
        }
    }

    cout<<"Dodatkowa litera w napisB to: "<<dodatkowy<<endl;
    return dodatkowy;


}


int main() {

    vector<int>a = {1,2,3,4,5,6,7,8,8,9,10};
    duplikat(a);

    set<int>setA = {1,2,3,4,5,6,7,8,9};
    set<int>setB = {4,5,6,7,8,9,10,11,12,13};
    funkcja<int>(setA,setB);

    set<string>setC = {"Ola","Ala","Kasia","Basia","Gosia","Zuzia"};
    set<string>setD = {"Zuzia","Gosia","Basia","Marysia","Tosia"};

    funkcja<string>(setC,setD);

    string napisA = "gacek";
    string napisB ="ekocag";
    string napisC = "gacekk";

    funkcjaB(napisA,napisB);
    funkcjaB(napisA,napisC);

    Dictionary dictionary;
    dictionary.addWord("truskawka","strawberry");
    dictionary.addWord("samolot","airplane");
    dictionary.addWord("snieg","snow");
    dictionary.addWord("zima","winter");
    dictionary.addWord("prezent","gift");
    dictionary.addWord("kot","cat");
    dictionary.addWord("fotel","armchair");
    dictionary.addWord("jedzenie","food");
    dictionary.addWord("chmura","cloud");
    dictionary.addWord("szczescie","happiness");
    dictionary.addWord("Ausralia","Australia");
    dictionary.addWord("truskawka","strawberry");


    dictionary.showDictionary();
    dictionary.showTranslation("truskawka");
    dictionary.deleteWord("kot");
    dictionary.showDictionary();
    dictionary.showTranslationAlfabeticallyZtoA();

    return 0;
}
