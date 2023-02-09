#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> mapString;
    
    //inserting in maps
    mapString[1] = "abc";
    mapString[2] = "def";
    
    mapString.insert({3,"ghi"});
    mapString.insert({4,"jkl"});
    
    //printing values
    unordered_map<int, string> :: iterator it;
    for(it = mapString.begin(); it != mapString.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;
    
    cout<<endl;
    
    //printing values    
    for(auto itt : mapString)
        cout<<itt.first<<" "<<itt.second<<endl;
    
    cout<<endl;    
        
    //all the values in map are unique, if we try add a new value at an existing index, the previous values gets changes
    mapString[3] = "xyz"; //initially mapString[3] was "ghi", this will work only if we use index
    for(auto itt : mapString)
        cout<<itt.first<<" "<<itt.second<<endl;
        
    cout<<endl;
    
    //find function -> returns an iterator to the index of element being searched, else returns map.end()
    
    auto itx = mapString.find(2);
    if(itx != mapString.end())
        cout<<(*itx).first<<" "<<(*itx).second<<" ";
    else
        cout<<"No Value\n";
    cout<<endl;
    
    auto ity = mapString.find(7);
    if(ity != mapString.end())
        cout<<(*ity).first<<" "<<(*ity).second<<" ";
    else
        cout<<"No Value";    
    
    cout<<endl;
    
    //erase function
    mapString.erase(3);
    for(auto ittx : mapString)
        cout<<ittx.first<<" "<<ittx.second<<endl;
        
    cout<<endl;
        
    //this will return an iterator pointing to 10 element, if 10th element is not present, this will return mapString.end
    auto ittxy = mapString.find(10); 
    if(ittxy == mapString.end())
        cout<<"Element not present";        
}   
