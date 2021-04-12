OBJ = score.o classify.o eval.o getscore.o output.o
APPNAME = score

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
%.o : %.c
	gcc -g -c -o $@ $<
clean:


	rm $(OBJ)
