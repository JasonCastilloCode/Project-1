#include <iostream>
#pragma once
#include <string>
using namespace std;

class Book{
    private:
        string title_;
        string author_;
        int page_count_;
        bool flag_;
    public:
        Book();
        Book(const string& title,const string& author,const int page_count,bool flag = false);
        void setTitle(const string& title);
        void setAuthor(const string& author);
        void setPageCount(const int page_count);
        void setDigital();
        string getTitle() const;
        string getAuthor() const;
        int getPageCount()const;
        bool isDigital() const;
};