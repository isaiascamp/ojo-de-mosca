//
//  main.cpp
//  estados
//
//  Created by Isaías Campos Avila on 05/10/23.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Circle");

  const int numLineas = 100;
  for (int i = 0; i < numLineas; i++) {
    sf::VertexArray linea(sf::Lines, 2);
    float angle = i * 3.14159265358979323846 / 180;

    float x = cos(angle) * 200;
    float y = sin(angle) * 200;
    linea[0].position = sf::Vector2f(x, y);
    linea[1].position = sf::Vector2f((i + 1) * 10, 0);
      linea[0].color = sf::Color::Red;
      linea[1].color = sf::Color::Red;

      window.draw(linea);
  }

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear(sf::Color::White);

    window.display();
  }

  return 0;
}
