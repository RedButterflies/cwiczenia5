//
// Created by szyns on 04.12.2023.
//

#include <algorithm>
#include <iomanip>
#include "Dictionary.h"

Dictionary::Dictionary() {}

void Dictionary::addWord(string word, string translation) {
map<string,string>::iterator it;
int i =0;
for(it=words.begin();it!=words.end();it++)
{
    if(words.count(word))
    {
        i=1;
    }
}
if(i==0)
{
    words.insert(make_pair(word,translation));
    cout<<"Slowo zostalo dodane do slownika";
}
else{
    cout<<"The word is already in the dictionary";
}
}

void Dictionary::deleteWord(string word) {
    if(words.count(word))
    {
        words.erase(word);
        cout<<"Usunieto slowo ze slownika";
    }
    else
    {
        cout<<"Slowo, ktore chcesz usunac nie znajduje sie w slowniku"<<endl;
    }

}

void Dictionary::showDictionary() {
    cout<<endl;
    cout<<"The dictionary"<<endl;
    cout<<endl;
    map<string,string>::iterator it;
    for(it=words.begin();it!=words.end();it++)
    {
        cout<<"Word: "<<setw(20)<<left<<it->first<<" Traslation: "<<it->second<<endl;
    }

}

void Dictionary::showTranslation(string word) {
    if(words.count(word))
    {
        cout<<"Translation of the word "<<word<<": "<<words.find(word)->second<<endl;
    }
    else
    {
        cout<<"The word you're looking for a translation of is not in the dictionary"<<endl;
    }

}

static bool comp(const pair<string,string> &a,const pair<string,string> &b)
{
    return a.second > b.second;
}
void Dictionary::showTranslationAlfabeticallyZtoA() {
    cout<<endl;
    cout<<"The dictionary sorted alfabetically from Z to A by translation: "<<endl;
    cout<<endl;
    vector<pair<string,string>> mapvector;
    map<string,string>::iterator it;
    for(it=words.begin();it!=words.end();it++)
    {
        mapvector.emplace_back(make_pair(it->first,it->second));
    }
    sort(mapvector.begin(),mapvector.end(),comp);
    vector<pair<string,string>>::iterator itA;
    for(itA=mapvector.begin();itA!=mapvector.end();itA++)
    {
        cout<<"Word: "<<setw(20)<<left<<itA->first<<"Translation: "<<itA->second<<endl;
    }

}
