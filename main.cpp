#include <SFML/Graphics.hpp>

int main()
{
    // Tạo cửa sổ game kích thước 800x600
    sf::RenderWindow window(sf::VideoMode(800, 600), "Chuc mung! Ban da cai xong SFML!");

    // Tạo một hình tròn màu xanh lá
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(300.f, 200.f); // Đặt vị trí giữa màn hình

    // Vòng lặp chính của game
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();      // Xóa màn hình cũ
        window.draw(shape);  // Vẽ hình tròn
        window.display();    // Hiển thị lên
    }

    return 0;
}