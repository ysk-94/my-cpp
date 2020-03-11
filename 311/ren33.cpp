#include <iostream>
#include <string>

class Book {
  std::string title;
  std::string writer;
  int price;

public:
  Book(std::string title, std::string writer, int price);
  Book(const Book& other);

  std::string get_title() const;
  std::string get_writer() const;
  int get_price() const;

  void set_title(std::string title);
  void set_writer(std::string writer);
  void set_price(int price);
};

std::string Book::get_title() const {
  return title;
}

std::string Book::get_writer() const {
  return writer;
}

int Book::get_price() const {
  return price;
}

void Book::set_title(std::string title) {
  title = title;
}

void Book::set_writer(std::string writer) {
  writer = writer;
}

void Book::set_price(int price) {
  price = price;
}

Book::Book(std::string title, std::string writer, int price) : title(title), writer(writer), price(price) {
}

Book::Book(const Book& other) {
  set_title(other.get_title());
  set_writer(other.get_writer());
  set_price(other.get_price());
}

int main() {
  Book b("海底二万哩", "俺", 10000);
  std::cout << b.get_title() << std::endl; 
  std::cout << b.get_writer()<< std::endl; 
  std::cout << b.get_price() << std::endl;

  Book alt(b);
  std::cout << b.get_title() << std::endl; 
  std::cout << b.get_writer()<< std::endl; 
  std::cout << b.get_price() << std::endl;
}
