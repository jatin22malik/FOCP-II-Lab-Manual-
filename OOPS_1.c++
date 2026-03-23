#include<iostream>
using namespace std;
class Car

{
   
     
     float price;
     int made;
     string colour;
     public:
     string brand;
      
   void input_details()
   
    {
        
        cout << "ENTER BRAND, PRICE, MADE, COLOUR: ";
        
        cin >> brand>> price>> made>> colour;
    }

     void display_info()

     {
        cout<< endl<< brand << endl << price << endl << colour << endl << brand ;
     }
};

int main(){
    Car C1;
    //C1.brand = "ABC";
    //C1.price = "2500000";
    C1.input_details();
    C1.display_info();

    return 0;


}