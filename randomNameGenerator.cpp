#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> firstNameSyllables;
    vector<string> lastNameSyllables;
    firstNameSyllables.push_back("vi");
    firstNameSyllables.push_back("vek");
    firstNameSyllables.push_back("gou");
    firstNameSyllables.push_back("rav");
    firstNameSyllables.push_back("ra");
    firstNameSyllables.push_back("hul");
    firstNameSyllables.push_back("ghav");
    firstNameSyllables.push_back("dee");
    firstNameSyllables.push_back("nesh");
    firstNameSyllables.push_back("vid");
    firstNameSyllables.push_back("it");
    lastNameSyllables.push_back("mah");
    lastNameSyllables.push_back("esh");
    lastNameSyllables.push_back("wari");
    lastNameSyllables.push_back("agar");
    lastNameSyllables.push_back("wal");
    lastNameSyllables.push_back("ku");
    lastNameSyllables.push_back("mar");
    lastNameSyllables.push_back("wala");
    lastNameSyllables.push_back("paan");
    lastNameSyllables.push_back("ghat");

    string currentName="";
    srand(time(0));
    for(int i=0;i<(rand()%2)+2;i++){
        currentName+=firstNameSyllables[rand()%firstNameSyllables.size()];
    }
    currentName+=" ";
    for(int i=0;i<(rand()%2)+2;i++){
        currentName+=lastNameSyllables[rand()%lastNameSyllables.size()];
    }

    cout<<currentName;

    return 0;
}