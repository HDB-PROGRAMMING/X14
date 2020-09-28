#ifndef OBJECTS
 #define OBJECTS

 class MainObject {
	 int x, y;
	 bool LBLOCK, RBLOCK, UBLOCK, DBLOCK;

 public:
	 MainObject(int _x, int _y) : x(_x), y(_y) {};
	 //Constructor

	 int getX() { return x; };
	 int getY() { return y; };

	 void setLBLOCK(bool state) { this->LBLOCK = state; }
	 void setRBLOCK(bool state) { this->RBLOCK = state; }
	 void setUBLOCK(bool state) { this->UBLOCK = state; }
	 void setDBLOCK(bool state) { this->DBLOCK = state; }

	 bool getLBLOCK() { return LBLOCK; }
	 bool getRBLOCK() { return RBLOCK; }
	 bool getUBLOCK() { return UBLOCK; }
	 bool getDBLOCK() { return DBLOCK; }
	 //Getters and Setters

	 void show();
	 void clean();
	 void move(char key);
	 void die();
	 //Interaction functions
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


 void MainObject::move(char key) {
	 clean();
	 if((key == LEFT_KEY) && KeyPressed(key) && this->LBLOCK == false)  x--;
	 if((key == RIGHT_KEY) && KeyPressed(key) && this->RBLOCK == false) x++;
	 if((key == UP_KEY) && KeyPressed(key) && this->UBLOCK == false)    y--;
	 if((key == DOWN_KEY) && KeyPressed(key) && this->DBLOCK == false)  y++;
	 show();
 } // MainObject

 class MinimalObject {
	 int x, y;

 public:
	 MinimalObject(int _x, int _y) : x(_x), y(_y) {};
	 //Constructor

	 int getX() { return x; };
	 int getY() { return y; };
	 //Getters and Setters

	 void show();
	 void move();
	 void clean();
	 bool colision(MainObject obj, int rangeX, int rangeY);
	 //Interaction functions
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

 bool MinimalObject::colision(MainObject obj, int rangeX, int rangeY) {
	 if (
		 (x >= obj.getX() && x < obj.getX() + rangeX)
		  && 
		 (y >= obj.getY() && y < obj.getY() + rangeY)
	    ) {
	   	 return true;

	 } else {
		 return false;

	 }
 } // MinimalObject
#endif