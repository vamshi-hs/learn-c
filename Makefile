say_hello:
	@echo "Hello world"

say_bye:
	@echo "Bye"

CC = gcc

linear_test: ./linear_search/test.c
	@${CC} ./linear_search/test.c ./linear_search/linear_search.c -o linear_search_test 
	@./linear_search_test

.DEFAULT_GOAL := linear_test
# .DEFAULT_GOAL := say_bye
