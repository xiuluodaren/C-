@echo off
cd .\Build
cmake -G "MinGW Makefiles" .. > TriffleInfo
mingw32-make