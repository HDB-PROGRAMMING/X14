::X14 game engine tests
@echo off
g++ src_ok.cpp -o src_ok.exe
.\src_ok.exe
rm src_ok.exe
::src_ok.cpp

g++ main_object.cpp -o main_object.exe
.\main_object.exe
rm main_object.exe
::main_object.cpp

g++ minimal_object.cpp -o minimal_object.exe
.\minimal_object.exe
rm minimal_object.exe
::minimal_object.cpp