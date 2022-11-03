#include <iostream>
#include <vector>

using namespace std;

class Character
{
    private:
        string firstName;
        string lastName;
        int age;
        int importance;

    public:
        Character(string firstname, string lastname, int age, int importance)
        {
            this->firstName=firstname;
            this->lastName=lastname;
            this->age=age;
            this->importance=importance;
        }
        Character();
        string CharacterType()
        {
            string result;
            if(this->importance==10) result="Title Character";
            else if(this->importance>=8) result="Main Character";
            else if(this->importance>=5) result="Side Character";
            else result="NPC";
            return result;
        }
};

class Writer
{
    private:
        string firstName;
        string lastName;
        int age;

    public:
        Writer(string firstname, string lastname, int age)
        {
            this->firstName=firstname;
            this->lastName=lastname;
            this->age=age;
        }
        Writer();
        string name()
        {
            return this->firstName+" "+this->lastName;
        }
};

class Book
{
    private:
        string title;
        int pages;
        Writer author;
        Character characters[];
        int review;

    public:
        Book(string title, int pages, Writer author, Character characters)
        {
            this->title=title;
            this->pages=pages;
            this->author=author;
            this->characters=characters;
        }
        void reviewBook(double review)
        {
            this->review=int(review);
        }
};

int main()
{
    Writer AuthorOfTheBook("JK","Rowling",30);
    cout<<AuthorOfTheBook.name()<<endl;
    Character Character1("Harry","Potter",11,10);
    Character Character2("Ron","Weasley",11,8);
    Character Character3("Hermione","Granger",11,8);
    cout<<Character1.CharacterType();

    vector <Character> characters;
    characters.push_back(Character1);
    characters.push_back(Character2);
    characters.push_back(Character3);

    Book Book1("Harry Potter and the Philosopher's Stone",200,AuthorOfTheBook,characters);
}
