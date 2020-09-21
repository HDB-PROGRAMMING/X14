#pragma once

class MainObject {
	int x, y;
 
public:
	MainObject(int _x, int _y) : x(_x), y(_y) {};
	int getX() { return x; };
	int getY() { return y; };
	void show();
	void clean();
	void move();
	void die();
};


void MainObject::show() {
	return;

}

void MainObject::clean() {
	return;

}

void MainObject::die() {
	return;

}
// Methods to be overwritten


void MainObject::move() {
	if (kbhit()) {
		char key = getch();
		clean();
		if ((key == LEFT_KEY) && x > 3) x--;
		if ((key == RIGHT_KEY) && x < 111) x++;
		if ((key == UP_KEY) && y > 4) y--;
		if ((key == DOWN_KEY) && y < 25) y++;
		show();

	}
} // MainObject

class MinimalObject {
	int x, y;

public:
	MinimalObject(int _x, int _y) : x(_x), y(_y) {};
	int getX() { return x; };
	int getY() { return y; };
	void show();
	void move();
	void clean();
	bool colision(MainObject obj);
};

void MinimalObject::show() {
	return;

}

void MinimalObject::move() {
	return;

}

void MinimalObject::clean() {
	return;

}
// Methods to be overwritten

bool MinimalObject::colision(MainObject obj) {
	if (
		(x >= obj.getX() && x < obj.getX() + 5)
		  && 
		(y >= obj.getY() && y < obj.getY() + 3)
	   ) {
	   	return true;

	} else {
		return false;

	}
} // MinimalObject