CXX = g++ -fPIC

all: Alarm

Alarm: alarm.c
	g++ -g -o alarm alarm.c
	git add -A  >> .local.git.out
	git commit -a -m "Make Alarm Clock" >> .local.git.out

clean:
	rm -f *.out
	rm -f *.o 
	rm -f alarm
