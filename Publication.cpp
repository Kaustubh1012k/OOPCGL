#include <iostream>
#include <string.h>

using namespace std;

class Publication
{
    string title;
    float price;

public:

Publication(){
    title=" ";
    price=0;
}
    void setData()
    {
        cout << "\nEnter the Title: ";
        cin.ignore();
        getline(cin,title);
        cout << "\nEnter the Price: ";
        cin >> price;
    }
    void displayData()
    {
    	cout<<endl;
        cout<<"\n-----Information----"<<endl;
        cout << "\nTitle of Publication: " << title << endl;
        cout << "\nPrice: " <<price<< endl;
    }
};

class Book : public Publication
{
    int page_count;

public:
    Book()
    {
        page_count = 0;
    }

    void setBook()
    {
        Publication::setData();
        cout<<endl;
        cout << "Enter Page Count: ";
        cin >> page_count;
    }

    void displayBook()
    {
        Publication::displayData();
        cout<<endl;
        try{
            
            
            if (page_count < 0)
            {
                throw page_count;
            }
            else
            {
                cout << "\nPage Count is " << page_count << endl;
            }
        }
        catch (int x)
        {
            cout << "Invalid Pages" <<x<< endl;
            page_count = 0;
        }
    }
};

class tape : public Publication
{
    float time;

public:
    tape()
    {
        time = 0;
    }
    void setTape()
    {
        Publication::setData();
        cout<<endl;
        cout << "Enter Time in minutes: ";
        cin >> time;
        
    }

    void displayTape()
    {
        Publication::displayData();
        cout<<endl;
        try
        {
            if (time < 0)
            {
                throw time;
            }
        }
        catch (float p)
        {
            cout << "Invalid Time" <<p<< endl;
            time = 0;
        }
        cout << "Time is: " << time << endl;
    }
};

int main()
{

    Book b[10];
    tape t[10];

    int choice=0, bcount = 0, tcount = 0;

    do
    {
        cout << "\n1.Add Book " << endl;
        cout << "2.Add Tape " << endl;
        cout << "3.Display Book " << endl;
        cout << "4.Display Tape " << endl;
        cout << "5.Exit " << endl;
        cout << "\nEnter The choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nAdd Book " << endl;
            b[bcount].setBook();
            bcount++;
            break;

        case 2:
            cout << "\nAdd Tape" << endl;
            t[tcount].setTape();
            tcount++;
            break;

        case 3:
            cout << "\nDisplay Book " << endl;
            for (int i=0; i < bcount; i++)
            {
                b[i].displayBook();
            }
            break;

        case 4:
            cout << "\nDisplay Tape" << endl;
            for (int j=0; j <tcount; j++)
            {
                t[j].displayTape();
            }
            break;

        case 5:
            cout << "\nProgram Exited " << endl;
            exit(0);
            break;

        default:
            cout << "Invalid" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
