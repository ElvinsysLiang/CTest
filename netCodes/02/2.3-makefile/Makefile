CC = gcc
export CFLAGS = -O2
TARGET = test
RM = rm -rf
export OBJSDIR = ${shell pwd}/.objs

$(TARGET) : $(OBJSDIR) main.o
	$(MAKE) -C add
	$(MAKE) -C sub
	$(CC) -o $(TARGET) $(OBJSDIR)/*.o
	
main.o:%.o : %.c
	$(CC) -c $^ -o $(OBJSDIR)/$@ $(CFLAGS) -Iadd -Isub
$(OBJSDIR) :
	mkdir -p $@

.PHONY : clean
clean :
	-$(RM) $(TARGET)
	-$(RM) $(OBJSDIR)/*.o
	$(MAKE) -C add
	$(MAKE) -C sub
