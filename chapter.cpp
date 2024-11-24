#ifndef CHAPTER_H
#define CHAPTER_H
#include <iostream>
#include <string>
#include "author.cpp"
#include "article.cpp"

class Chapter
{
private:
    std::string title;
    Author author;
    int chapterNumber;

public:
    Chapter()
    : title(""), author(Author()), chapterNumber(1) {};

    Chapter(std::string chapterTitle, Author chapterAuthor, int chapterNumber)
    : title(chapterTitle), author(chapterAuthor), chapterNumber(chapterNumber) {};

    Chapter(const Chapter &other)
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {};

    Chapter(Article &article) 
    : title(article.getTitle()), author(article.getAuthor()), chapterNumber(1) {};

   
   
    std::string getTitle()
    {
        return title;
    };

    Author getAuthor()
    {
        return author;
    };

    int getChapterNumber()
    {
        return chapterNumber;
    };    

    void displayInfo()
    {
        std::cout << "Chapter " << chapterNumber <<": " << title << " by " << author.getName() << " " << author.getSurname() << std::endl;
    };

};
#endif