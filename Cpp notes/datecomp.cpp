#include <iostream>
using namespace std;
int ans =0;
class Date{
    private : 
        int day;
        int month;
        int year;
    public:
        Date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void getDate(){
            cout<<"Date "<<day<<'/'<<month<<'/'<<year;
        }
        void getDate2(){
            cout<<" is smaller tha date "<<day<<'/'<<'/'<<month<<'/'<<year;
        }
    Date operator > (Date &obj){
        if(year < obj.year){
            ans = 1;
        }
        else if(year == obj.year){
            if(month < obj.month)
                ans=1;
            else if(month == obj.month){
                if(day < obj.day)
                    ans=1;
                else if(day == obj.day)
                    ans=2;
            }
        }
    }

};
int main(){
    int day, month, year;
    cout<<"Enter the first date"<<endl;
    cout<<"The date : ";
    cin>>day;
    cout<<"month : ";
    cin>>month;
    cout<<"year : ";
    cin>>year;
    Date d1(day, month, year);
    
    cout<<"Enter the second date"<<endl;
    cout<<"The date : ";
    cin>>day;
    cout<<"month : ";
    cin>>month;
    cout<<"year : ";
    cin>>year;
    Date d2(day, month, year);
    
    Date d3 = d1 > d2;
    if(ans==0){
        d1.getDate();
        d2.getDate2();
    }
    else if(ans==1){
        d2.getDate();
        d1.getDate2();
    }
    else
        cout<<"Both date are equals"<<endl;
}