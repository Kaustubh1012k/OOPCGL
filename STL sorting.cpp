#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
class database{
    public:
    string name;
    string RollNumber;
    long long adhar;
    string DOB;
};

    bool comparator(database d1, database d2){
        return d1.RollNumber < d2.RollNumber;
    }


int main(){

    vector<database> storage;
    while(true){
        cout<<"enter 1 for inserting data"<<endl;
        cout<<"enter 2 for displaying data "<<endl;
        cout<<"enter 3 for sorting data "<<endl;
        cout<<"enter 4 for searching data with help of DOB "<<endl;
        cout<<"enter 5 to Exit"<<endl;

        cout<<"enter your choice : ";
        int a;
        cin>>a;
        if(a ==1){
            database d1;
            cout<<endl;
            cout<<"enter the name : ";
            cin>>d1.name;
            cout<<"enter the rool number : ";
            cin>>d1.RollNumber;
            cout<<"enter the DOB : ";
            cin>>d1.DOB;
            cout<<"enter the adhar : ";
            cin>>d1.adhar;
            storage.push_back(d1);
            cout<<endl;
        }

        else if(a == 2){
            for(int i=0; i<storage.size(); i++){
                cout <<"RollNumber = " << storage[i].RollNumber<<"\n"<<"Name = "<<storage[i].name<<"\n"<<"DoB = "<<storage[i].DOB<<"\n"<<"Adhar = "<<storage[i].adhar<<endl;
            }
        }
        else if(a==3){
            sort(storage.begin(), storage.end(), comparator);
        }
        else if(a==4){
            cout<<"enter the roll_no. to search a particular student : "<<endl;
            string  b;
            cin>>b;
            bool found = false;
            for(int i=0; i<storage.size(); i++){
                if(storage[i].RollNumber == b){
                    found = true;
                    cout<<"student found"<<endl;
                    cout << storage[i].RollNumber<< " "<<storage[i].name<<" "<<storage[i].DOB<<" "<<storage[i].adhar<<endl;
                    break;
                }
            }
            if(!found){
                cout<<"student have not registered yet";
                cout<<endl;
            }
        }
        else if(a==5){
            cout<<"thank you for using the program.";
            cout<<endl;
        }
        else{
            cout<<"INvadlid Input !!"<<endl;
        }

    }

    return 0;
}
