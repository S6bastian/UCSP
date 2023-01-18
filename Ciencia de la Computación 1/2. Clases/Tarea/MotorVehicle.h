#include <string>

class MotorVehicle{
    public:
        MotorVehicle(std::string make, std::string fuelType, std::string color, int yearOfManufacture, int engineCapacity)
            : m{make}, ft{fuelType}, c{color} {
                yom = yearOfManufacture;
                ec = engineCapacity;
            }

        void setm(std::string nm){
            m = nm;
        }
        void setft(std::string nft){
            ft = nft;
        }
        void setc(std::string nc){
            c = nc;
        }
        void setyom(int nyom){
            yom = nyom;
        }
        void setec(int nec){
            ec = nec;
        } 
        
        std::string getm() const {
            return m;
        }
        std::string getft() const {
            return ft;
        }
        std::string getc() const {
            return c;
        }
        int getyom() const {
            return yom;
        }
        int getec() const {
            return ec;
        }

        void displayCarDetails(){
            std::cout<<"Make: "<<m<<std::endl;
            std::cout<<"Fuel type: "<<ft<<std::endl;
            std::cout<<"Color: "<<c<<std::endl;
            std::cout<<"Year of manufacture: "<<yom<<std::endl;
            std::cout<<"Engine capacity: "<<ec<<std::endl;
        }

    private:
        std::string m,ft,c;
        int yom,ec;
};