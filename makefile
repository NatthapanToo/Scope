compile: main.c 
	 gcc main.c -o ozone

run: ozone
	 ./ozone

clean: ozone
	 rm ozone
