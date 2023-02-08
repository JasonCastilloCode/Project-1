
/*
Author: Jason Castillo
Course: CSCI-235
Instructor: Tiziana Ligorio
Assignment: title, Project 1 Book

*/
#include "Book.hpp"
  /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
  */
Book::Book(){ //Constructor
	title_ = ""; //Private member values
	author_ = "";
	page_count_ = 0;
	flag_ = false;
}
   /**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
    */
Book::Book(const string& title,const string& author,const int page_count,bool flag){ 
	flag_ = flag;
	title_ = title;
	author_ = author;
	page_count_ = page_count;
}
 /**
   @param  : the title of the Book
   @post   : sets the Book's title to the value of the parameter
 */
void Book::setTitle(const string& title){
	title_ = title; // Reminder the first title is the permeter and second is the private member
}
 /**
     @return : the title of the Book
  */
string Book::getTitle()const{
	return title_;
}
  /**
    @param  : the name of the author of the Book
    @post   : sets the Book's author to the value of the parameter
  */
void Book::setAuthor(const string& author){
	author_ = author;
}
  /**
      @return : the author of the Book
   */
string Book::getAuthor() const{
	return author_;
}
  /**
    @param  : a positive integer page count
    @pre    : page count > 0 - books cannot have a negative number of pages
    @post   : sets the page count to the value of the parameter
  */
void Book::setPageCount(const int page_count){
	if(page_count>0)
		page_count_ = page_count;
}
  /**
      @return : the page count
   */
int Book::getPageCount() const{
	return page_count_;
}
  /**
   @post   : sets the digital flag to true
  */
void Book::setDigital(){ 
	flag_ = true;
}
   /**
    @return true if the book is available in digital form, false otherwise

  Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
   */
bool Book::isDigital() const{ 
	return flag_;
}
