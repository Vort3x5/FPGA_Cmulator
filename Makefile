main: main.c
	gcc $< -o $@

release:
	./main

clean:
	rm main

.PHONY: run
