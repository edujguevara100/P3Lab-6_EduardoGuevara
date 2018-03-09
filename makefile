temp:	main.o Vagon.o Item.o Bomba.o Espina.o Normal.o V.o Tren.o Invisible.o Player.o Bot.o Escenarios.o Casilla.o Obstaculo.o 
		g++ main.o Vagon.o Item.o Bomba.o Espina.o Normal.o V.o Tren.o Invisible.o Player.o Bot.o Escenarios.o Casilla.o Obstaculo.o -o temp
main.o:	main.cpp Escenarios.h Invisible.h Tren.h Item.h Bomba.h Vagon.h V.h Espina.h Normal.h Player.h Bot.h Casilla.h Obstaculo.h
		g++ -c main.cpp
Escenarios.o:	Escenarios.cpp Escenarios.h Item.h
		g++ -c Escenarios.cpp
Vagon.o:	Vagon.cpp Vagon.h Item.h
		g++ -c Vagon.cpp
Item.o:	Item.cpp Item.h 
		g++ -c Item.cpp
Bomba.o:	Bomba.cpp Bomba.h Item.h
		g++ -c Bomba.cpp
Espina.o:	Espina.cpp Espina.h Bomba.h
		g++ -c Espina.cpp
Normal.o:	Normal.cpp Normal.h Bomba.h
		g++ -c Normal.cpp
V.o:	V.cpp V.h Bomba.h
		g++ -c V.cpp
Tren.o:	Tren.cpp Tren.h Escenarios.h Vagon.h Player.h Bot.h Casilla.h Obstaculo.h
		g++ -c Tren.cpp
Invisible.o:	Invisible.cpp Invisible.h Escenarios.h Player.h Bot.h Casilla.h Obstaculo.h 
		g++ -c Invisible.cpp
Player.o:	Player.cpp Player.h Item.h
		g++ -c Player.cpp
Bot.o:	Bot.cpp Bot.h Item.h
		g++ -c Bot.cpp
Escenarios.o:	Escenarios.cpp Escenarios.h
		g++ -c Escenarios.cpp
Casilla.o:	Casilla.cpp Casilla.h Item.h
		g++ -c Casilla.cpp
Obstaculo.o:	Obstaculo.cpp Obstaculo.h Item.h
		g++ -c Obstaculo.cpp
