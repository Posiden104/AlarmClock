CXX = g++ -fPIC

all: Alarm

Alarm: alarm.cpp
	g++ -g -o alarm alarm.cpp
	git add -A  >> .local.git.out
	git commit -a -m "Make Alarm Clock" >> .local.git.out

clean:
	rm -f *.out
	rm -f *.o 
	rm -f alarm
