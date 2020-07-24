#include "Menu1.h"


Menu1::Menu1(float width,float height)
{
	if(!font.loadFromFile("arial.ttf"))
	{
	}
	menu[0].setFont(font);
	menu[0].setColor(sf::Color::Red);
	menu[0].setString("PLAY");
	menu[0].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS+1)*1));

	menu[1].setFont(font);
	menu[1].setColor(sf::Color::White);
	menu[1].setString("SELECT LEVEL");
	menu[1].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS+1)*2));

	menu[2].setFont(font);
	menu[2].setColor(sf::Color::White);
	menu[2].setString("RULES");
	menu[2].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS+1)*3));

	menu[3].setFont(font);
	menu[3].setColor(sf::Color::White);
	menu[3].setString("ABOUT AUTOR");
	menu[3].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS+1)*4));

	menu[4].setFont(font);
	menu[4].setColor(sf::Color::White);
	menu[4].setString("EXIT");
	menu[4].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS+1)*5));

	selecteditemindex = 0;
}

MenuOptions::MenuOptions(float width,float height)
{
	if(!font.loadFromFile("arial.ttf"))
	{
	}
	menuOptions[0].setFont(font);
	menuOptions[0].setColor(sf::Color::Red);
	menuOptions[0].setString("1");
	menuOptions[0].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*1));

	menuOptions[1].setFont(font);
	menuOptions[1].setColor(sf::Color::White);
	menuOptions[1].setString("2");
	menuOptions[1].setPosition(sf::Vector2f(width/4,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*2));

	menuOptions[2].setFont(font);
	menuOptions[2].setColor(sf::Color::White);
	menuOptions[2].setString("3");
	menuOptions[2].setPosition(sf::Vector2f(width/4,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*3));

	menuOptions[3].setFont(font);
	menuOptions[3].setColor(sf::Color::White);
	menuOptions[3].setString("4");
	menuOptions[3].setPosition(sf::Vector2f(width/4,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*4));

	menuOptions[4].setFont(font);
	menuOptions[4].setColor(sf::Color::White);
	menuOptions[4].setString("5");
	menuOptions[4].setPosition(sf::Vector2f(width/4,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*5));

	menuOptions[5].setFont(font);
	menuOptions[5].setColor(sf::Color::White);
	menuOptions[5].setString("6");
	menuOptions[5].setPosition(sf::Vector2f(width/4,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*6));

	menuOptions[6].setFont(font);
	menuOptions[6].setColor(sf::Color::White);
	menuOptions[6].setString("7");
	menuOptions[6].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*2));

	menuOptions[7].setFont(font);
	menuOptions[7].setColor(sf::Color::White);
	menuOptions[7].setString("8");
	menuOptions[7].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*3));

	menuOptions[8].setFont(font);
	menuOptions[8].setColor(sf::Color::White);
	menuOptions[8].setString("9");
	menuOptions[8].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*4));

	menuOptions[9].setFont(font);
	menuOptions[9].setColor(sf::Color::White);
	menuOptions[9].setString("10");
	menuOptions[9].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*5));   

	menuOptions[10].setFont(font);
	menuOptions[10].setColor(sf::Color::White);
	menuOptions[10].setString("EXIT");
	menuOptions[10].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*6));

	menuOptions[11].setFont(font);
	menuOptions[11].setColor(sf::Color::White);
	menuOptions[11].setString("BACK");
	menuOptions[11].setPosition(sf::Vector2f(width/4*3,height/(MAX_NUMBER_OF_ITEMS_OPTIONS+1)*7));

	selecteditemindexOptions = 0;
}


MenuOptions::~MenuOptions(void)
{
}
void MenuOptions::draw(sf::RenderWindow &window)
{
	for(int i=0;i<MAX_NUMBER_OF_ITEMS_OPTIONS;i++)
	{
		window.draw(menuOptions[i]);
	}
}

void MenuOptions::MoveUP()
{
	if(selecteditemindexOptions-1>=0)
	{
		menuOptions[selecteditemindexOptions].setColor(sf::Color::White);
		selecteditemindexOptions --;
		menuOptions[selecteditemindexOptions].setColor(sf::Color::Red);
	}

}
void MenuOptions::MoveDown()
{
	if(selecteditemindexOptions+1<MAX_NUMBER_OF_ITEMS_OPTIONS)
	{
		menuOptions[selecteditemindexOptions].setColor(sf::Color::White);
		selecteditemindexOptions ++;
		menuOptions[selecteditemindexOptions].setColor(sf::Color::Red);
	}

}







Menu1::~Menu1(void)
{
}
void Menu1::draw(sf::RenderWindow &window)
{
	for(int i=0;i<MAX_NUMBER_OF_ITEMS;i++)
	{
		window.draw(menu[i]);
	}
}

void Menu1::MoveUP()
{
	if(selecteditemindex-1>=0)
	{
		menu[selecteditemindex].setColor(sf::Color::White);
		selecteditemindex --;
		menu[selecteditemindex].setColor(sf::Color::Red);
	}

}
void Menu1::MoveDown()
{
	if(selecteditemindex+1<MAX_NUMBER_OF_ITEMS)
	{
		menu[selecteditemindex].setColor(sf::Color::White);
		selecteditemindex ++;
		menu[selecteditemindex].setColor(sf::Color::Red);
	}

}