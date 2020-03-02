#include <iostream>

struct product {
  int id;
  int price;
  int stock;
};

void show_product(product* pt) {
  std::cout << pt->id << std::endl;
  std::cout << pt->price << std::endl;
  std::cout << pt -> stock << std::endl;
}

int main() {
  product pen = {
    0,
    100,
    200
  };

  show_product(&pen);
}
