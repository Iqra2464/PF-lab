#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
const int SCREEN_WIDTH=10;
const int FALL_SPEED=500000;
const int NUM_OBJECTS=5;
struct object{
	int x;
	char symbol;
	bool active;
};
void displayScreen(object objects[], int playerPos){
	system ("clear");
	for (int i = 0; i < SCREEN_WIDTH; i++){
		bool objecthere = false;
		
		for (int j = 0; j < NUM_OBJECTS; j++){
			if (objects[j]. active && objects[j].x == i){
				cout <<objects[j].symbol;
				objecthere = true;
				break;
			}		}
	}
	if(!objecthere)cout<<".";
}
 cout<<"\nplayer position: "<< playerPos<<endl;
}
void initializeobjects(object objects[]){
	for (int i=0; i< NUM_OBJECTS;i++){
		objects[i].x = rand()% SCREEN_WIDTH;
		objects[i].symbol = 'A' + i;
		objects[i].active = true;
	}

}
int main() {
	sr and (time(0));
	object objects[NUM_OBJECTS];
	initializeObjects(objects);
	int playerScore = 0;
	int rounds = 5;
	while (rounds > 0){
		displayScreen(objects,playerScore);
		for (int i=0; i< NUM_OBJECTS;i++){
			if (objects[i].active){
				char input;
				cout << "Catch the object by typing its letter (" << objects [i] .symbol << "): ";
				cin >> input;
				if (input == objects[i] .symbol){
					cout << "Caught!"<< endl;
					objects[i].active active = false;
					playerScore++;
				}
				else {
					cout << "Missed!" << endl;
				}
			}
		}
		rounds--;
		usleep(FALL_SPEED);
		system("clear");
	}
	cout << "Game Over! Your score:"<< playerScore << endl;
	return 0;
	}
	
}


