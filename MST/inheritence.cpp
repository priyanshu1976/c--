#include <iostream>
using namespace std;

class Human{

    protected : 
        int height ;
        int weight ;
        int age;
    public : 
    // setter
    void setweight(int weight){
        this->weight = weight;
    }
    void setheight(int height){
        this->height = height;
    }
    void setage(int age){
        this->age = age;
    }
    //getter
    int getweight(){
        return weight;
    }
    int getheight(){
        return height;
    }
    int getage(){
        return age;
    }
};

class Male : public Human{
    // get weight
    public : 
    void getweight(){
        cout << this->weight << endl << "this is inside male" <<  endl;
    }
};

int main(){

    Male gurleen ;
    gurleen.getweight();
    return 0;
}

// types of inheritence 
//  1 single 
// 2  multi level
//  3 multiple
//  4 hybrid
// 5 heira