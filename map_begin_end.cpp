#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mymap;

    mymap["Bangladesh"] = 1000;
    mymap["India"] = 500;
    mymap["England"] = 300;

    for(map<string, int>::iterator it = mymap.begin(); it!=mymap.end(); ++it)
        cout<<it->first<<" => "<<it->second<<endl;
}
