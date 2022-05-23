output: main.o Game.o Character.o Computer.o Player.o Brute.o Goblin.o Lord.o Move.o Skeleton.o Thief.o Warlock.o Warrior.o Shieldsman.o UndeadKnight.o
	g++ -o output main.o Game.o Character.o Computer.o Player.o Brute.o Goblin.o Lord.o Move.o Skeleton.o Thief.o Warlock.o Warrior.o Shieldsman.o UndeadKnight.o

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp Game.h
	g++ -c Game.cpp

Character.o: Character.cpp Character.h
	g++ -c Character.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

Computer.o: Computer.cpp Computer.h
	g++ -c Computer.cpp

Brute.o: Brute.cpp Brute.h
	g++ -c Brute.cpp

Goblin.o: Goblin.cpp Goblin.h
	g++ -c Goblin.cpp

Lord.o: Lord.cpp Lord.h
	g++ -c Lord.cpp

Move.o: Move.cpp Move.h
	g++ -c Move.cpp

Skeleton.o: Skeleton.cpp Skeleton.h
	g++ -c Skeleton.cpp

Thief.o: Thief.cpp Thief.h
	g++ -c Thief.cpp

Warlock.o: Warlock.cpp Warlock.h
	g++ -c Warlock.cpp

Warrior.o: Warrior.cpp Warrior.h
	g++ -c Warrior.cpp

Shieldsman.o: Shieldsman.cpp Shieldsman.h
	g++ -c Shieldsman.cpp

UndeadKnight.o: UndeadKnight.cpp UndeadKnight.h
	g++ -c UndeadKnight.cpp

clean:
	rm *.o output

