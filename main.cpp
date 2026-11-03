#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double english, mathematics, computer, somali, science;
    double total, average;
    char grade;

    cout<<"===== STUDENT MARKS CALCULATOR =====\n\n";
    cout<<"Enter student name: ";
    getline(cin,name);
    cout<<"Enter English marks: ";
    cin>>english;

    cout<<"Enter mathematics marks: ";
    cin>>mathematics;

    cout<<"Enter computer marks: ";
    cin>>computer;

    cout<<"Enter somali marks: ";
    cin>>somali;

    cout<<"Enter science marks: ";
    cin>>science;

    if (english <0 || english >100 
    || mathematics <0 || mathematics >100 
    || computer <0 || computer >100 
    || somali <0 || somali >100 
    || science <0 || science >100) {
        
        cout<<"\nError: marks must be between 0 and 100. \n";
        return 1;
    }

    total=english+mathematics+computer+somali+science;
    average=total/5.0;

    if (average >=80) { grade='A';}
    else if (average >=70) { grade='B';}
    else if (average >=60) { grade='C';}
    else if (average >=50) { grade='D';}
    else { grade='F';}

    cout<<fixed<<setprecision(2);

    cout<<"\n========== STUDENT REPORT ==========\n";
    cout<<"Student name: "<<name<<'\n';
    cout<<"Total marks: "<<total<<" \500\n";
    cout<<"average: "<<average<< "%\n";
    cout<<"grade: "<<grade<< '\n';

    if (average >=50) {
        cout<< "Result PASS\n";
    } else { cout<< "Result: FAIL\n";}

    cout<<"=======================\n";

    return 0;

}