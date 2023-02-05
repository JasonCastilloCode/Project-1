#include "Book.hpp"

Book::Book(){ //Constructor
	title_ = ""; //Private member values
	author_ = "";
	page_count_ = 0;
	flag_ = false;
}
Book::Book(const string& title,const string& author,const int page_count,bool flag){ 
	flag_ = flag;
	title_ = title;
	author_ = author;
	page_count_ = page_count;
}
void Book::setTitle(const string& title){
	title_ = title; // Reminder the first title is the permeter and second is the private member
}
string Book::getTitle()const{
	return title_;
}
void Book::setAuthor(const string& author){
	author_ = author;
}
string Book::getAuthor() const{
	return author_;
}
void Book::setPageCount(const int page_count){
	if(page_count>0)
		page_count_ = page_count;
}
int Book::getPageCount() const{
	return page_count_;
}
void Book::setDigital(){ 
	flag_ = true;
}

bool Book::isDigital() const{ 
	return flag_;
}
