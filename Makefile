CC= g++ 
PLATFORM= -DMACOS -framework OpenGL -framework GLUT  		# uncomment for macos
INCPATH= 		# path to engine includes
#ENG= lib/libK9.a	# built engine
GAMEENG= game.cpp utility.cpp manager/Manager.cpp manager/LogManager.cpp 2d/Point2D.cpp 3d/Point3D.cpp 3d/Position3D.cpp manager/GraphicsManager.cpp manager/ResourceManager.cpp 3d/Mesh.cpp 3d/Vector3.cpp
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
