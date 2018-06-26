#Target : Dependencies
	#Action

## ORDER IS IMPORTANT

#Making Final run program
run : pythagorean.o pythoRequirments.o
	gcc -o run pythagorean.o pythoRequirments.o -lm

#Targeting "pythoRequirments.c"
pythoRequirments.o : pythoRequirments.c pythoRequirments.h
	gcc -c pythoRequirments.c

#Targeting The file "Pythogorean File"
pythorean.o : pythagorean.c pythoRequirments.h
	gcc -c pythagorean.c
