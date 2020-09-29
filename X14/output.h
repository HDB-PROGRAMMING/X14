#ifndef OUTPUT
 #define OUTPUT

 #include "colors.h"

 void gotoxy(int x, int y) {
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	 COORD dwPos;
	 dwPos.X = x;
	 dwPos.Y = y;
	 SetConsoleCursorPosition(hCon, dwPos);
 }

 void KeyPress(char key) {
	 keybd_event(key, 0x9d, 0, 0);
	 keybd_event(key, 0x9d, KEYEVENTF_KEYUP, 0);
 }
 
 void HideCursor() {
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	 CONSOLE_CURSOR_INFO cci;
	 cci.dwSize = 50;
	 cci.bVisible = FALSE;
	 SetConsoleCursorInfo(hCon, &cci);
 }

 void ShowCursor() {
	 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	 CONSOLE_CURSOR_INFO cci;
	 cci.bVisible = TRUE;
	 SetConsoleCursorInfo(hCon, &cci);
 }
#endif