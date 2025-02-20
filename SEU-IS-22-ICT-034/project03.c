#include<st.h>
#include<stdio.h>

atruct Book{
    char title [100];
    char author [50];
    double price;
    };

int main () {
    struct Book myBook;
    strcpy(mybook.title,"sherlock Holmes");
    strcpy(mybook.author, "Arther conan Doyle");
    myBook.price= 15.99;

    printf("Book Title ; %s\n",myBook.title);
    printf("Author : %s\n", mybook.author);
    printf("price : $%2f\n" ,mybook.price);
