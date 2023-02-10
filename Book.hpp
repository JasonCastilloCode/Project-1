#include <iostream>
#pragma once
#include <string>
using namespace std;

class Book{
/*
private:
    - The title of the book (a string)
    - The author of the book (a string)
    - The page count (an integer)
    - A flag indicating whether the book is available in digital form (a Boolean)
*/
    private:
        string title_;
        string author_;
        int page_count_;
        bool flag_;
    public:
  /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
   */
        Book();
   /**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
    */
        Book(const string& title,const string& author,const int page_count,bool flag = false);
 /**
   @param  : the title of the Book
   @post   : sets the Book's title to the value of the parameter
 */
        void setTitle(const string& title);

  /**
    @param  : the name of the author of the Book
    @post   : sets the Book's author to the value of the parameter
  */
        void setAuthor(const string& author);
  /**
    @param  : a positive integer page count
    @pre    : page count > 0 - books cannot have a negative number of pages
    @post   : sets the page count to the value of the parameter
  */
        void setPageCount(const int page_count);
  /**
   @post   : sets the digital flag to true
  */
        void setDigital();
 /**
     @return : the title of the Book
  */
        string getTitle() const;
  /**
      @return : the author of the Book
   */

        string getAuthor() const;
  /**
      @return : the page count
   */
        int getPageCount()const;

   /**
    @return true if the book is available in digital form, false otherwise

  Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
   */
        bool isDigital() const;
};