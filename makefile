futx.exe:futx.cpp
	g++ -o futx.exe futx.cpp

pack:futx.exe
	tar cvf futxad.tar conf.ini *.bat futx.exe *.dll *.vbs --transform 's@^@futx/@'

.PHONY:
	install

