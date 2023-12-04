//
// Created by szyns on 04.12.2023.
//

#ifndef CWICZENIA5_DICTIONARY_H
#define CWICZENIA5_DICTIONARY_H
#include<iostream>
#include <map>

using namespace std;

class Dictionary {
    map<string,string>words;
public:
    Dictionary();
    void addWord(string word, string translation);
    void deleteWord(string word);
    void showDictionary();
    void showTranslation(string word);
    void showTranslationAlfabeticallyZtoA();

};


#endif //CWICZENIA5_DICTIONARY_H
