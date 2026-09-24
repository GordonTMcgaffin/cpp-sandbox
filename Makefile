# Ensure the user provides a FILE variable
ifndef FILE
$(error FILE is not set. Usage: make run FILE=path/to/your/file.cpp)
endif

# Get the file path without the extension
OUT = $(basename $(FILE))

.PHONY: run
run:
	clang++ $(FILE) -o $(OUT) && ./$(OUT)