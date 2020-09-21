#ifndef COLORS
 #define COLORS

 void SetColor(int color) {
 	SetConsoleTextAttribute(
 		GetStdHandle(STD_OUTPUT_HANDLE), color
 	);
 }
 //function to set screen color

 #define FORE_COLOR_BLACK  0
 #define FORE_COLOR_RED    4
 #define FORE_COLOR_GREEN  2
 #define FORE_COLOR_BLUE   1
 #define FORE_COLOR_YELLOW 14
 #define FORE_COLOR_PURPLE 5
 #define FORE_COLOR_WHITE  15

 #define BACK_COLOR_BLACK  0
 #define BACK_COLOR_RED    192
 #define BACK_COLOR_GREEN  160
 #define BACK_COLOR_BLUE   144
 #define BACK_COLOR_YELLOW 224
 #define BACK_COLOR_PURPLE 80
 #define BACK_COLOR_WHITE  240
#endif