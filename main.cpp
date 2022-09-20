#include <iostream>
#include <fstream>
#include <map>
#include "ArgumentManager.h"

using namespace std;

int main(int argc, char* argv[])
{
    ArgumentManager am(argc,argv);
    string infilename = am.get("input");
    string outfilename = am.get("output");
    ifstream input(infilename);
    ofstream output(outfilename);



    map<string, int> map; //string for INDEX and int for DATA 
    //a pair
    int size;
    input >> size;


    string s;

    for(int i = 0;i<size;i++)
    {
        input >> s;
        map[s] ++;
    }

    for(auto x: map)
    {
        output << x.first << ": " << x.second << endl;
    }
    
    return 0;
}