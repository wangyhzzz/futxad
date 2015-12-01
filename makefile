futx.exe:futx.cpp
	g++ -o futx.exe futx.cpp

install:futx.exe
	@cp futx.exe /c/path/

.PHONY:
	install

