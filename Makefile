CC= g++ 
PLATFORM= -DMACOS  		# uncomment for macos
INCPATH= 		# path to engine includes
#ENG= lib/libdragonfly.a	# built engine
GAMEENG= game.cpp manager/Manager.cpp
#GAME= game.cpp
EXECUTABLE= game		
OBJECTS= $(GAMESRC:.cpp=.o)

all: $(GAMESRC) $(EXECUTABLE) Makefile

$(EXECUTABLE): $(ENG) $(OBJECTS) $(GAME) 
	$(CC) $(GAMEENG) $(OBJECTS) $(ENG) $(PLATFORM) -o $@ $(LDFLAGS) 

.cpp.o: 
	$(CC) -c $(DEBUG) -I$(INCPATH) $(PLATFORM) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE) core k9.log Makefile.bak *~
