#include <iostream>

struct product {
  int id;
  int price;
  int stock;
};

void show_product(product prod) {
  std::cout << prod.id << std::endl;
  std::cout << prod.price << std::endl;
  std::cout << prod.stock << std::endl;
}

int main() {
  product pen = {
    0,
    100,
    200
  };

  show_product(pen);
}

