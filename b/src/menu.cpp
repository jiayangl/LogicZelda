#include <string>
#include <iostream>

using namespace std;

menu::menu()
	{
		/*cout << R"(
		██╗      ██████╗  ██████╗ ██╗ ██████╗    ██████╗ ██╗   ██╗███╗   ██╗ ██████╗ ███████╗ ██████╗ ███╗   ██╗
		██║     ██╔═══██╗██╔════╝ ██║██╔════╝    ██╔══██╗██║   ██║████╗  ██║██╔════╝ ██╔════╝██╔═══██╗████╗  ██║
		██║     ██║   ██║██║  ███╗██║██║         ██║  ██║██║   ██║██╔██╗ ██║██║  ███╗█████╗  ██║   ██║██╔██╗ ██║
		██║     ██║   ██║██║   ██║██║██║         ██║  ██║██║   ██║██║╚██╗██║██║   ██║██╔══╝  ██║   ██║██║╚██╗██║
		███████╗╚██████╔╝╚██████╔╝██║╚██████╗    ██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████╗╚██████╔╝██║ ╚████║
		╚══════╝ ╚═════╝  ╚═════╝ ╚═╝ ╚═════╝    ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝
		)" << '\n';*/
		
		cout << "██╗      ██████╗  ██████╗ ██╗ ██████╗    ██████╗ ██╗   ██╗███╗   ██╗ ██████╗ ███████╗ ██████╗ ███╗   ██╗" << endl;
		cout << "██║     ██╔═══██╗██╔════╝ ██║██╔════╝    ██╔══██╗██║   ██║████╗  ██║██╔════╝ ██╔════╝██╔═══██╗████╗  ██║"<< endl;
		cout << "██║     ██║   ██║██║  ███╗██║██║         ██║  ██║██║   ██║██╔██╗ ██║██║  ███╗█████╗  ██║   ██║██╔██╗ ██║"<< endl;
		cout << "██║     ██║   ██║██║   ██║██║██║         ██║  ██║██║   ██║██║╚██╗██║██║   ██║██╔══╝  ██║   ██║██║╚██╗██║"<< endl;
		cout << "███████╗╚██████╔╝╚██████╔╝██║╚██████╗    ██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████╗╚██████╔╝██║ ╚████║"<< endl;
		cout << "╚══════╝ ╚═════╝  ╚═════╝ ╚═╝ ╚═════╝    ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝"<< endl;
		cout << endl;
                                                                                                        
		cout << "Welcome to insert game name" << endl;
		cout << "You are trapped in a dungeon and must defeat all the monsters to escape" << endl;
		cout << "Type 'w' to move up, 's' to move down, 'a' to move left, and 'd' to move right" << endl;
		cout << "Type in 'HELP' to pull up instructions" << endl;
		cout << "Type in 'QUIT' to exit the game" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
	}
	
	void menu::openmenu()
	{
		cout << "INSTRUCTIONS:" << endl;
		cout << "Type 'w' to move up, 's' to move down, 'a' to move left, and 'd' to move right" << endl;
		cout << "Type in 'HELP' to pull up instructions" << endl;
		cout << "Type in 'QUIT' to exit the game" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
		cout << "Type in 'MAP' to see dungeon map" << endl;
		cout << "Defeat all monsters to move on! D's are doors, M's are monsters and P is player" << endl;
	}
	
	void menu::exitGame(player p)
	{
		cout << "Thanks for playing" << endl;
		cout << "Your score is: " << p.getScores() << endl;
		cout << "Press enter to close the program" << endl;
		cin.get();
		cin.get();
		exit(0);
	}
	
	void menu::playerDeath(player p)
	{
		cout << "Unforuntately...you have died..." << endl;
		cout << R"(
		  ▄████  ▄▄▄       ███▄ ▄███▓▓█████     ▒█████   ██▒   █▓▓█████  ██▀███  
		 ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀    ▒██▒  ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒
		▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███      ▒██░  ██▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒
		░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄    ▒██   ██░  ▒██ █░░▒▓█  ▄ ▒██▀▀█▄  
		░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒   ░ ████▓▒░   ▒▀█░  ░▒████▒░██▓ ▒██▒
		 ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░   ░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░
		  ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░     ░ ▒ ▒░    ░ ░░   ░ ░  ░  ░▒ ░ ▒░
		░ ░   ░   ░   ▒   ░      ░      ░      ░ ░ ░ ▒       ░░     ░     ░░   ░ 
		      ░       ░  ░       ░      ░  ░       ░ ░        ░     ░  ░   ░     
		                                                     ░                   
		)" << '\n';
		exitGame(p);
	}
	
	void menu::winGame(player p)
	{
		cout << R"(
		┬ ┬┌─┐┬ ┬  ┬ ┬┌─┐┌┐┌  ┬                                                             
		└┬┘│ ││ │  ││││ ││││  │                                                             
		 ┴ └─┘└─┘  └┴┘└─┘┘└┘  o                                                             
		┌─┐┌─┐┌─┐┌┬┐   ┬┌─┐┌┐   ┌─┐                                                         
		│ ┬│ ││ │ ││   ││ │├┴┐   ┌┘                                                         
		└─┘└─┘└─┘─┴┘  └┘└─┘└─┘   o                                                          
		┌┐┌┌─┐┬ ┬  ┌─┐┌─┐  ┌─┐┌┐┌  ┬ ┬┬┌┬┐┬ ┬  ┬ ┬┌─┐┬ ┬┬─┐  ┌┐ ┌─┐┬─┐┬┌┐┌┌─┐  ┬  ┬┌─┐┌─┐  ┬
		││││ ││││  │ ┬│ │  │ ││││  ││││ │ ├─┤  └┬┘│ ││ │├┬┘  ├┴┐│ │├┬┘│││││ ┬  │  │├┤ ├┤   │
		┘└┘└─┘└┴┘  └─┘└─┘  └─┘┘└┘  └┴┘┴ ┴ ┴ ┴   ┴ └─┘└─┘┴└─  └─┘└─┘┴└─┴┘└┘└─┘  ┴─┘┴└  └─┘  o
	
	                                                                                                                                                                                                                                                                                                                                                                           
		)" << '\n';
		cout << "Your score is: " << p.getScores() << endl;
		cout << "Press enter to close the program" << endl;
		cin.get();
		cin.get();
		exit(0);
	}