CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

adventurer:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestadventurer.c rngs.c -o randomtestadventurer -lm -g

runAdventurer: adventurer
	./randomtestadventurer &> randomtestadventurer.out
	gcov dominion.c >> randomtestadventurer.out
	cat dominion.c.gcov >> randomtestadventurer.out

randomcard:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestcard.c rngs.c -o randomtestcard -lm -g

runRandomCard: randomcard
	./randomtestcard &> randomtestcard.out
	gcov dominion.c >> randomtestcard.out
	cat dominion.c.gcov >> randomcard.out


playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

playdom2: dominion.o playdom2.c
	gcc -o playdom2 playdom2.c -g dominion.o rngs.o $(CFLAGS)

testdominion:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c interface.c testdominion.c rngs.c -o testdominion -lm -g


testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

unit1:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest1.c rngs.c -o unittest1 -lm -g 

unit2:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest2.c rngs.c -o unittest2 -lm -g

unit3:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest3.c rngs.c -o unittest3 -lm -g

unit4:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest4.c rngs.c -o unittest4 -lm -g

card1:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest1.c rngs.c -o cardtest1 -lm -g

card2:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest2.c rngs.c -o cardtest2 -lm -g

card3:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest3.c rngs.c -o cardtest3 -lm -g

card4:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest4.c rngs.c -o cardtest4 -lm -g

randomtestadventurer:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestadventurer.c rngs.c -o randomtestadventurer.out -lm -g

randomtestcard:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestcard.c rngs.c -o randomtestcard.out -lm -g

unittestresult.out:
	make all
	./unittest1 &> unittestresult.out
	./unittest2 >> unittestresult.out
	./unittest3 >> unittestresult.out
	./unittest4 >> unittestresult.out
	./cardtest1 >> unittestresult.out
	./cardtest3 >> unittestresult.out
	./cardtest4 >> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

runBug1: cardtest2.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion_olsenw.c -o cardtest2_olsenw cardtest2.c -g rngs.c $(CFLAGS)
	./cardtest2_olsenw

runBug2: cardtest4.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion_gassa.c -o cardtest4_gassa cardtest4.c -g rngs.c $(CFLAGS)
	./cardtest4_gassa

runBug3:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion_knoppjo.c interface.c testdominion.c rngs.c -o testdominion_knoppjo -lm -g
	./testdominion_knoppjo 20
	./testdominion_knoppjo 20 &> testdominion.out

testdominion_galec:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion_galec.c interface.c testdominion.c rngs.c -o testdominion_galec -lm -g

testdominion_kaiserh:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion_kaiserh.c interface.c testdominion.c rngs.c -o testdominion_kaiserh -lm -g
	./testdominion_kaiserh
	./testdominion_kaiserh &> testdominion.out

newUnit1: dominion.o unittest1.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o unittest1 unittest1.c -g dominion.o rngs.c $(CFLAGS)

newUnit2: dominion.o unittest2.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o unittest2 unittest2.c -g dominion.o rngs.c $(CFLAGS)

newUnit3: dominion.o unittest3.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o unittest3 unittest3.c -g dominion.o rngs.c $(CFLAGS)

newUnit4: dominion.o unittest4.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o unittest4 unittest4.c -g dominion.o rngs.c $(CFLAGS)

newCard1: dominion.o cardtest1.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o cardtest1 cardtest1.c -g dominion.o rngs.c $(CFLAGS)

newCard2: dominion.o cardtest2.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o cardtest2 cardtest2.c -g dominion.o rngs.c $(CFLAGS)

newCard3: dominion.o cardtest3.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o cardtest3 cardtest3.c -g dominion.o rngs.c $(CFLAGS)

newCard4: dominion.o cardtest4.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 -o cardtest4 cardtest4.c -g dominion.o rngs.c $(CFLAGS)


interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player testDrawCard testBuyCard badTestDrawCard newUnit1 newUnit2 newUnit3 newUnit4 newCard1 newCard2 newCard3 newCard4 randomtestadventurer randomtestcard

clean:
	rm -f *.o playdom.exe playdom test.exe test player unittest1 unittest2 unittest3 unittest4 cardtest1 cardtest2 cardtest3 cardtest4 randomtestadventurer.out randomtestcard.out testdominion player.exe testInit testInit.exe testdominion_kaiserh *.out *.gcov *.gcda *.gcno *.so
