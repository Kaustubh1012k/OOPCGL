#include<iostream>
using namespace std;

class student{
    private:
           int roll_no;
           string f_name, surname;
           string contact_no, div, dob, bld_grp, drv_lic;
           string address[3];
           string question[3] = {"flat_no", "soc_name", "city"};
           static int count;
           static string classes;
    public:
    static string college;
    inline static void class_display(){ // static function and inline
        cout<<classes;
    }
    // friend funnction show(); static function and inline function
    student(){// constructor
        cout<<"Enter name and surname : "<<endl;
        cin>>f_name>>surname;
        cout<<"ENTER DOB : dd/mm/yyyy : "<<endl;
        cin>>dob;
        // classes = 'se';
        div = 2;
        roll_no += count;
        cout<<endl;
    }
    student(student &stu){
        f_name = stu.f_name;
        surname = stu.surname;
        div = stu.div;
        contact_no = stu.contact_no;
        dob = stu.dob;
        drv_lic = stu.drv_lic;
        bld_grp = stu.bld_grp;
        address[0] = stu.address[0];
        address[1] = stu.address[1];
        address[2] = stu.address[2];
    }
    ~student(){
        cout<<"students left"<<count<<endl;
        count--;
    }

    void getinfo();
    void display_data();
};

string student :: classes="SE";
void student :: getinfo(){
    cout<<"enter contact number :"<<endl;
    cin>>contact_no;

    cout<<"Driving Licence number : "<<endl;
    cin>>drv_lic;
    for(int i=0; i<3; i++){
        cout<<question[i]<<flush;
        cin>>address[i];
    }
}

int student :: count =0;
string student ::college = "AISSMS";
void student :: display_data(){
    cout<<"\n";
    cout<<"roll number"<<roll_no<<" student's detsils are as follow : "<<endl;
    cout<<endl;
    cout<<"Name of student = "<<f_name<<" "<< surname<<endl;
    cout<<"DOB = "<<dob<<endl;
    cout<<"Class of student = ";
    student :: class_display;
    cout<<endl;
    cout<<"Name of college = "<<college<<endl;
    cout<<"roll_number = "<<roll_no<<endl;
    cout<<"blood group = "<<bld_grp<<endl;
    cout<<"contact_no = "<<contact_no<<endl;
    cout<<"Address = ";
    for(int j=0; j<3; j++){
        cout<<address[j]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"Enter the number of students "<<endl;
    int n;
    cin>>n;
    student *stu = new student [n];
    for(int i=0; i<n; i++){
        cout<<"student"<<i+1<<" "<<endl;
        (*(stu+i)).getinfo();
        cout<<"\n";
    }

    int k;
    int p=1;
    while(p==1)
{
    cout<<"1)Check data of 1 student \n 2)Check data of all \n 3)copy data";
    cout<<"enter choice "<<endl;
    cin>>k;
         if(k==1){
            cout<<"enter number of student whose details you want to read "<<endl;
            int j;
            cin>>j;
            (stu+j-1)->display_data();
         }
         else if(k==2){
            for(int i=0;i<n;i++){
                (stu+i)->display_data();
            }
         }
         else if(k==3){
            cout<<"copy details of student "<<endl;
            int m;
            cin>>m;
            student s(*(stu+m-1));
            s.display_data();
         }
         cout<<"to continue enter 1";
         cin>>p;
};
    delete []stu;
 
    return 0;
}
