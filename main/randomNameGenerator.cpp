#include<bits/stdc++.h>
using namespace std;

vector<string> firstNameSyllables;
vector<string> lastNameSyllables;

void fillFirstSyllables(){
	ifstream infirst;
	string word;
	infirst.open("firstName.txt");
    if(!infirst)    cout<<"NO READ\n"; 
	while(infirst>>word)	firstNameSyllables.push_back(word);
    infirst.close();
}

void fillLastSyllables(){
	ifstream inlast;
	string word;
	inlast.open("lastName.txt");
    if(!inlast)    cout<<"NO READ\n";
	while(inlast>>word)	lastNameSyllables.push_back(word);
    inlast.close();
}

int main()
{
    fillFirstSyllables();
    fillLastSyllables();

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
