#Target : Dependencies
	#Action

## ORDER IS IMPORTANT
object_files = driver.o requirments.o
#Making Final run program

run : execute
	./execute

execute : driver.o requirments.o
	gcc -o  execute $(object_files) -lm


#Targeting The file "Pythogorean File"
driver.o : driver.c requirments.h
	gcc -c driver.c


#Targeting "pythoRequirments.c"
pythoRequirments.o : requirments.c requirments.h
	gcc -c requirments.c

clean : $(object_files)
	rm $(object_files) run

remove : pythorean.c pythoRequirments.c
	rm pythorean.c pythoRequirments.c execute
