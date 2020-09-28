#ifndef INPUT
 #define INPUT

 #define UP_KEY    72
 #define DOWN_KEY  80
 #define LEFT_KEY  75
 #define RIGHT_KEY 77

 #define ESCAPE    27
 #define SPACE     ' '
 #define BACKSPACE 8

 #define KEY_ONE   49
 #define KEY_TWO   50
 #define KEY_THREE 51
 #define KEY_FOUR  52
 #define KEY_FIVE  53
 #define KEY_SIX   54
 #define KEY_SEVEN 55
 #define KEY_EIGHT 56
 #define KEY_NINE  57
 #define KEY_ZERO  58

 int KeyPressed(char key) {
 	if(kbhit() && getch() == key) {
 		return YES;

 	} else {
 		return NO;
 	}
 }
#endif
// control keys