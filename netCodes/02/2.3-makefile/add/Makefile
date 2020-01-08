OBJS = add.o
all : $(OBJS)
$(OBJS) : %.o:%.c
	$(CC) -c $^ -o $(OBJSDIR)/$@ $(CFLAGS)

.PHONY: clean
clean:
	-$(RM) $(OBJS)
