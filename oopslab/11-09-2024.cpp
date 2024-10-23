#include <bits/stdc++.h>
using namespace std;
// class A{
//     private :
//         int a_value = 0 ;
    
//     public:
//     A(){
//         cout << "A called" << endl;
//     }
//         // setter
//         void setvalue(int n){
//             a_value = n;
//         } 
//         int getvalue(){
//             return a_value;
//         }

// };
// class B: public A{
//     private :
//         int b_value = 0 ;
    
//     public:
//     B(){
//         cout << "b called" << endl;
//     }
//         // setter
//         void setvalueb(int n){
//             b_value = n;
//         } 
//         int getvalueb(){
//             return b_value;
//         }

// };
// // question 6
// class Book{
//     private :

//     public :   
//     string title;
//     string author;
//     int price;

//     void print(){
//         cout << "{" << title << " " << author  << " "<< price << '}' << endl;
//     }

// };

// class TextBook: public Book{
//     public:
//     string subject;
//     void print(){
//         cout << "{" << title << " " << author  << " "<< price << " " << subject << '}' << endl;
//     }
// };

// class Speedometer{
//     public :
//         int speed ;
//         // Speedometer(int speed){
//         //     this->speed = speed;
//         // }
// };
// class FuelGauge{
//     public :
//         int fuel ;
//         // FuelGauge(int fuel){
//         //     this->fuel = fuel;
//         // }
// };
// class Thermometer{
//     public :
//         int temp ;
//         // Thermometer(int temp){
//         //     this->temp = temp;
//         // }
// };
// class carDashboard: public Speedometer , FuelGauge , Thermometer{
//     public:
//         carDashboard(){
//             cout << "carDashboard called" << endl;
//         }
//         carDashboard(int speed , int fuel , int temp){
//             cout << "carDashboard called" << endl;
//             this->speed = speed;
//             this->fuel = fuel;
//             this->temp = temp;
//         }
//         void displayInfo(){
//             cout << "[ speed:" << speed << " fuel:" << fuel  << " temp:"<< temp << " " << "]" << endl;
//         }
// };

// class LibraryUser{

//     // this is a abstract class
//     public :
//         string name;
//         int id ;
//         string contact;
// };

// class Student: public LibraryUser{
//     public:
//         char grade;
//         Student(){

//         }

//         Student(string name , int id , string contact , char grade){
//             this->name = name;
//             this->id = id;
//             this->grade = grade;
//             this->contact = contact;
//         }
// };
// class Teacher: public LibraryUser{
//     public:
//         string department;
//         Teacher(){

//         }
//         Teacher(string name , int id , string contact , string department){
//             this->name = name;
//             this->id = id;
//             this->department = department;
//             this->contact = contact;
//         }
// };

class A{
    public : 
    A(){
        cout << "A" ;
    }
    ~A(){
        cout << "~A";
    }
};

class B : public A
{
    B(){
        cout << "B" ;
    }
    ~B(){
        cout << "~B";
    }
};
int main(){
    //  question 6
    // cout << "before b" << endl;
    // B pp;
    // cout << "after b" << endl;
    // pp.setvalue(7);
    // cout << pp.getvalue() << endl;
    // cout << "hellp" << endl;
    // question 6
    // Book comic;
    // comic.title ="champak";
    // comic.price = 100;
    // comic.author = "priyanshu";

    // TextBook flamingo;
    // flamingo.title = "flamingo";
    // flamingo.price = 200;
    // flamingo.author = "william";
    // flamingo.subject = "english";

    // flamingo.TextBook::print();
    // comic.Book::print();

    // QUESTION 7

    // carDashboard audi(4,5,6);
    // audi.displayInfo();

    // Question 8

    // Student pp("priyanshu" , 102303595 , "7703875277" , 'A');
    // Teacher bb("bhumika" , 102303583 , "9717299422" , "prinsu");
    A* obj;
    delete obj;
    return 0;
}