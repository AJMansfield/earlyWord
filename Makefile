
earlyWord: main.c dict.c rlutil.h
	g++ -w main.c -o earlyWord

earlyWord32.exe: main.c dict.c rlutil.h
	i686-w64-mingw32-g++ -static-libgcc -static-libstdc++ -w main.c -o earlyWord32.exe

earlyWord64.exe: main.c dict.c rlutil.h
	x86_64-w64-mingw32-g++ -static-libgcc -static-libstdc++ -w main.c -o earlyWord64.exe

all: earlyWord earlyWord32.exe earlyWord64.exe

install:
	@echo "Silly, don't install this. Run it directly once you have compiled it."

zip: main.c dict.c rlutil.h earlyWord32.exe earlyWord64.exe README LICENSE
	zip earlyWord.zip main.c dict.c rlutil.h earlyWord32.exe earlyWord64.exe README LICENSE

clean:
	rm earlyWord*