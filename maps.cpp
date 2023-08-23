#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    pair<string,int> p1("Jai",1);
    m.insert(p1);
    pair<string,int> p2=make_pair("deep",2);
    m.insert(p2);
    m["Singh"]=3;
    //the entry will get updated
    m["Singh"]=4;
    //1 string can have only 1 int, however 2 strings can have same int, but 1 string cannot have 2 int
    cout<<m["Jai"]<<endl;
    cout<<m["deep"]<<endl;
    cout<<m["Singh"]<<endl;
    //every unkown will have 0 as corresponding entry but they will be counted in size if you write the below line, if you do not write the
    //line then its size will not be counted 
    cout<<m["unkown"]<<endl;
    //if you write this line before it will give you error because below line can only show but unable to insert as the above line can;
    //cout<<m.at("Junkown2")<<endl;
    cout<<m.at("Jai")<<endl;
    cout<<m["Junkown2"]<<endl;
    //now it will work
    cout<<m.at("Junkown2")<<endl;
    cout<<m.size()<<endl;
    //count checks whether the entries are present or not?
    cout<<m.count("Jai")<<"   "<<m.count("unkown")<<"   "<<m.count("da fuq?")<<endl;
    //erase function
    cout<<m.erase("deep")<<endl;
    //iterator function
    unordered_map<string,int> :: iterator it;
    it=m.begin();
    //printing the map
    while(it!=m.end())
    {
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }
    //OR
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //bucket array, hashcode->uniform distribution->collision->collision handling, compression function theory,collision handling->open hashing, closed addressing
    //collision handling->open hashing->closed addressing,linear probing,qudratic probing, hash table


}    