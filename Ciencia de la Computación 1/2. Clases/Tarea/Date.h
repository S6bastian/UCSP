#include <string>

class Date{
    public:
        Date(int month, int day, int year){
                zday = day;
                if (month >= 1 && month <= 12)
                    zmonth = month;
                zyear = year;
        }
        
    void setday(int nday){
        zday = nday;
    }
    void setmonth(int nmonth){
        if (nmonth >= 1 && nmonth <= 12)
            zmonth = nmonth;
    }
    void setyear(int nyear){
        zyear = nyear;
    }

    int getday() const{
        return zday;
    }
    int getmonth() const{
        return zmonth;
    }
    int getyear() const{
        return zyear;
    }

    void displayDate(){
        
        std::cout<<zmonth<<"/"<<zday<<"/"<<zyear<<std::endl;
    }

    private:
        int zday,zmonth=1,zyear;
};

