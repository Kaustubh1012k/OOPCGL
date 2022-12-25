#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    typedef map <string,int> maptype;
    maptype populationMap;
    populationMap.insert(pair<string,int>("Maharashtra",9626357));
    populationMap.insert(pair<string,int>("Rajasthan",6578940));
    populationMap.insert(pair<string,int>("Karnataka",7746294));
    populationMap.insert(pair<string,int>("Punjab",10786737));
    populationMap.insert(pair<string,int>("West Bengal",8167234));
    maptype::iterator iter;
    cout<<"=======Population of states in India======="<<endl;
    cout<<"Size of population map :"<<populationMap.size()<<endl;
    string state_name;
    cout<<"Enter name of the state :";
    cin>>state_name;
    iter=populationMap.find(state_name);
    if(iter!=populationMap.end())
    cout<<state_name<<"'s population is "<<iter->second;
    else
    cout<<"Key is not population map"<<endl;
    populationMap.clear();
}
