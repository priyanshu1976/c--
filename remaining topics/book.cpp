#include <bits/stdc++.h>
using namespace std;

class book{
    public:
    string name;
    string author;
    int price;
    bool is_issued = false;
    public:
    book(){}
    book(string name , string author , int price): name(name) , author(author) , price(price) {}
    void display(){
        cout << "{ Name : " << name << " , author : " << author << ", price " << price << "}"<<endl;
    }
};
class Library{
    vector<book> lib;
    static int total;
    public:
    void addbook(string name , string author , int price){
        book temp(name, author , price);
        lib.push_back(temp);
        total++;
    }
    void search(string naam){
        bool con = false;
        for(int i = 0 ; i < lib.size() ; i ++){
            if(lib[i].name == naam){
                cout << "yes we have this book" << endl;
                con = true;
                lib[i].display();
                break;
            }
        }
        if(con == false){
            cout << "sorry book not found in lib" << endl;
        } 
    }
    static void totalbooks(){
        cout << total << endl;
    }
    void removebook(string naam){
        bool con = false;
        int index = 0;
        for(int i = 0 ; i < lib.size() ; i ++){
            if(lib[i].name == naam){
                con = true;
                index = i;
                break;
            }
        }
        if(con == false){
            cout << "book not presnet in lib" << endl;
            return ;
        }
        lib.erase(lib.begin() + index); 
        cout << "book successfuly removed" << endl; 
    }
    void borrow(string naam){
        bool con = false;
        for(int i = 0 ; i < lib.size() ; i ++){
            if(lib[i].name == naam){
                con = true;
                if(lib[i].is_issued == false){
                    cout << naam << "this book is successfully issued to you" << endl;
                    lib[i].is_issued = true;
                    return;
                }
                else{
                    cout << "sorry this book is already issued to someone else" << endl;
                    return;
                }
                break;
            }
        }
        if(con == false){
            cout << "book not presnet in lib" << endl;
            return ;
        }
    }
    void returnbook(string naam){
        for(int i = 0 ; i < lib.size() ; i ++){
            if(lib[i].name == naam){
                lib[i].is_issued =false;
            }
        }
    }
};
int Library::total = 0;
int main() {
    // cout << "hello world" << endl;
    Library nava;
    nava.addbook("Panchatantra", "Priyanshu", 300);
    nava.addbook("The Alchemist", "Paulo Coelho", 250);
    nava.addbook("1984", "George Orwell", 350);
    nava.addbook("To Kill a Mockingbird", "Harper Lee", 280);
    nava.addbook("The Catcher in the Rye", "J.D. Salinger", 230);
    nava.addbook("The Great Gatsby", "F. Scott Fitzgerald", 300);
    nava.addbook("Moby Dick", "Herman Melville", 450);
    nava.addbook("War and Peace", "Leo Tolstoy", 550);
    nava.addbook("Pride and Prejudice", "Jane Austen", 270);
    nava.addbook("The Lord of the Rings", "J.R.R. Tolkien", 400);
    nava.addbook("Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 320);
    nava.addbook("The Hobbit", "J.R.R. Tolkien", 290);
    nava.addbook("Crime and Punishment", "Fyodor Dostoevsky", 500);
    nava.addbook("The Brothers Karamazov", "Fyodor Dostoevsky", 600);
    nava.addbook("Anna Karenina", "Leo Tolstoy", 350);
    nava.addbook("Brave New World", "Aldous Huxley", 270);
    nava.addbook("The Road", "Cormac McCarthy", 280);
    nava.addbook("Siddhartha", "Hermann Hesse", 180);
    nava.addbook("Frankenstein", "Mary Shelley", 200);
    nava.addbook("The Picture of Dorian Gray", "Oscar Wilde", 230);
    nava.addbook("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 450);
    nava.addbook("Don Quixote", "Miguel de Cervantes", 550);
    nava.addbook("Les Misérables", "Victor Hugo", 650);
    nava.addbook("Jane Eyre", "Charlotte Brontë", 350);
    nava.addbook("Wuthering Heights", "Emily Brontë", 320);
    nava.addbook("The Divine Comedy", "Dante Alighieri", 470);
    nava.addbook("Dracula", "Bram Stoker", 290);
    nava.addbook("The Odyssey", "Homer", 300);
    nava.addbook("The Iliad", "Homer", 310);
    nava.addbook("Ulysses", "James Joyce", 700);
    nava.addbook("The Metamorphosis", "Franz Kafka", 150);

    // search 
    nava.search("To Kill a Mockingbird");

    // removebook
    nava.removebook("Ulysses");

    // removed book not found in lib
    nava.search("Ulysses");

    // borrow
    nava.borrow("Dracula");

    // can i borrow again
    nava.borrow("Dracula");

    // return dracula
    nava.returnbook("Dracula");

    // reissue
    nava.borrow("Dracula");

    Library::totalbooks();


    return 0;
}