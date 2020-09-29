::X14 game engine tests
@echo off
g++ -w src_ok.cpp -o src_ok.exe
.\src_ok.exe
rm src_ok.exe
::src_ok.cpp

g++ -w vars.cpp -o vars.exe
.\vars.exe
rm vars.exe
::vars.cpp

g++ -w objs.cpp -o objs.exe
.\objs.exe
rm objs.exe
::objs.cpp

g++ -w keybd.cpp -o keybd.exe
.\keybd.exe
rm keybd.exe
::keybd.cpp