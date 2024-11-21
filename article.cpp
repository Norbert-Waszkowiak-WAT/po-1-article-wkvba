#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>
#include "author.cpp"

class Article{
private:
    std::string title;
    std::string journal;
    Author author;
    int publicationYear;
public:
    Article()
    : title(""), author(Author()), publicationYear(0), journal(""){};
    
    Article(std::string articleTitle, Author articleAuthor, int year, std::string journalName)
    : title(articleTitle), journal(journalName), author(articleAuthor), publicationYear(year){};

    Article(Article &other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};

    std::string getJournal(){
        return journal;
    };
    
    int getPublicationYear(){
        return publicationYear;
    };

    Author getAuthor(){
        return author;
    };

    std::string getTitle(){
        return title;
    }

    void displayInfo(){
        std::cout << "azbest";
    };
};
#endif