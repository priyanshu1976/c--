// #include <bits/stdc++.h>
// using namespace std;
// class Hero{
//     private : 
//         string name ;
//         int health;
//     public :

// // default constructor
//         Hero(){
//             cout << "hello i am constructor" << endl;
//         }

//         // parametrised constructor 

//         Hero(int health , string name ){
//             this->health = health;
//             this->
//         }
//         void setname(string s) {
//             name = s;
//         }

//         void sethealth(int s) {
//             health = s;
//         }
//         int gethealth(){
//             return health;
//         }
//         string getname(){
//             return name;
//         }
// };
// int main() {
//     //static allocation 
//     Hero a;
//     a.sethealth(5);
//     a.setname("prinsu");

//     cout << a.gethealth() << endl;

//     //dynamic allocation
//     // in heap memory 
//     Hero *b = new Hero;

//     b->sethealth(10);
//     b->setname("priyanshu");

//     cout << "health of this dynamic allocated memory is " << b->gethealth() << endl;

//     return 0;
// }


// pass by reference 
// void swap(int a , int b ){
//     int temp = a;
//     a = b ;
//     b = temp;
// }

// pass by reference 
// void swap(int &a , int &b ){
//     int temp = a;
//     a = b ;
//     b = temp;
// }


#include <bits/stdc++.h>
using namespace std;

class Bhumika{
    bool attitude;
    bool beauty;
    float iq;
    int boobiessize;
    string bodyshape;

    public :
        // function overloading 
        // default constructor || nonparamatrised con
        Bhumika(){
            cout << "constructor called" << endl;
        }
        // parametarised 
        Bhumika(bool b){
            cout << "i am attitude constructor" << endl;
            attitude = b;
        }
        Bhumika(int n , bool b ){
            cout << "i am boobies constructor" << endl;
            boobiessize = n;
        }
        //copy constructor

        // Bhumika(Bhumika& temp){
        //     cout << "copy constructor" << endl;
        //     this->attitude = temp.attitude;
        //     this->boobiessize = temp.boobiessize;
        // }
        void setattitude(bool b){
            attitude = b;
        }
        void setbeauty(bool b){
            beauty = b;
        } 

        void setboobies(int n ){
            boobiessize = n;
        }

        // getter 
        void getboobies(){
            cout << boobiessize << endl;
        }
        void getattitude(){
            cout << attitude << endl;
        }

};


int main(){
    Bhumika bhumika;
    bhumika.setattitude(true);
    bhumika.setbeauty(true);
    bhumika.setboobies(10);     // set 10

    Bhumika prinsu(bhumika); // make copy priyanshu
    

    bhumika.setboobies(9);   // set = 9
  
    prinsu.getattitude();
    prinsu.getboobies(); // should print 10

    bhumika.getboobies(); // should print 9
    // Bhumika prinsu;
    // Bhumika.setattitude(true);
    // Bhumika.setbeauty(false);
    // Bhumika.setboobies(10);
    return 0;
}