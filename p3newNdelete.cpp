#include <iostream>
#include <string>

using namespace std;

class Book{

    string title;      
    int price;

    public:
        void setTitle(string brand){
            this->title = brand;
        }

        void setPrice(int price){
            this->price=price;
        }

        string getName(){
            return this->title;
        }

        int getPrice(){
            return this->price;
        }
};

int main(){
    Book * book;
    book = new Book();
    book->setTitle("Macbeth");
    book->setPrice(300);

    cout<<book->getName()<<endl;
    cout<<book->getPrice();

    free(book);
}