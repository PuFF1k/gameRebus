#pragma once
#include <SFML/Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 5
#define MAX_NUMBER_OF_ITEMS_OPTIONS 12

class Menu1
{
public:
	Menu1(float width,float height);
	~Menu1(void);
	void draw(sf::RenderWindow &window);
	void MoveUP();
	void MoveDown();
	int getpresseditem() { return selecteditemindex;}
private:
	int selecteditemindex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
};

class MenuOptions
{
public:
	MenuOptions(float width,float height);
	~MenuOptions(void);
	void draw(sf::RenderWindow &window);
	void MoveUP();
	void MoveDown();
	int getpresseditem() { return selecteditemindexOptions;}
private:
	int selecteditemindexOptions;
	sf::Font font;
	sf::Text menuOptions[MAX_NUMBER_OF_ITEMS_OPTIONS];
};

