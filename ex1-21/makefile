#OBJS specifies which files to compile as part of the project
OBJS = main.c

#CC Specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppressess all warnings
COMPILER_FLAGS = -w -g -Wall -fsanitize=address -fsanitize=undefined

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = 

#OBJ_NAME specifies the name of our executable
OBJ_NAME = a 

#The target that compiles our executable
all : $(OBJS) 
	$(CC) $(OBJS)  $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
