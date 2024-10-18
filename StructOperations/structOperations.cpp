#include <stdio.h>
#include <string.h>

struct Book
{
    char title[50];
    char author[50];
    int pages;
    float price;
};

void displayBook(struct Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);
}

void updateBook(struct Book *book, char *title, char *author, int pages, float price)
{
    strcpy(book->title, title);
    strcpy(book->author, author);
    book->pages = pages;
    book->price = price;
}

int main()
{
    struct Book book1;

    updateBook(&book1, "PHP is Awesome!!!!", "Jude the Obscure", 500, 30.99);
    displayBook(book1);

    return 0;
}