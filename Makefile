say_hello:
	@echo "Hello world"

say_bye:
	@echo "Bye"

CC = gcc

bst_test: ./trees/bst/test.c
	@${CC} ./trees/bst/test.c ./trees/bst/binary_search_tree.c -o ./trees/bst/binary_search_test
	@./trees/bst/binary_search_test

quick_sort_test: ./sorts/quick_sort/test.c
	@${CC} ./sorts/quick_sort/test.c ./sorts/quick_sort/quick_sort.c -o ./sorts/quick_sort/quick_sort_test
	@./sorts/quick_sort/quick_sort_test

merge_sort_test: ./sorts/merge_sort/test.c
	@${CC} ./sorts/merge_sort/test.c ./sorts/merge_sort/merge_sort.c -o ./sorts/merge_sort/merge_sort_test
	@./sorts/merge_sort/merge_sort_test

insertion_sort_test: ./sorts/insertion_sort/test.c
	@${CC} ./sorts/insertion_sort/test.c ./sorts/insertion_sort/insertion_sort.c -o ./sorts/insertion_sort/insertion_sort_test
	@./sorts/insertion_sort/insertion_sort_test

selection_sort_test: ./sorts/selection_sort/test.c
	@${CC} ./sorts/selection_sort/test.c ./sorts/selection_sort/selection_sort.c -o ./sorts/selection_sort/selection_sort_test
	@./sorts/selection_sort/selection_sort_test


bubble_sort_test: ./sorts/bubble_sort/test.c
	@${CC} ./sorts/bubble_sort/test.c ./sorts/bubble_sort/bubble_sort.c -o ./sorts/bubble_sort/bubble_sort_test
	@./sorts/bubble_sort/bubble_sort_test

binary_search_test: ./binary_search/test.c
	@${CC} ./binary_search/test.c ./binary_search/binary_search.c -o ./binary_search/binary_search_test 
	@./binary_search/binary_search_test

linear_test: ./linear_search/test.c
	@${CC} ./linear_search/test.c ./linear_search/linear_search.c -o ./linear_search/linear_search_test 
	@./linear_search/linear_search_test

al_test: ./arrayList/test.c
	@${CC} ./arrayList/test.c ./arrayList/array_list.c -o ./arrayList/array_list_test 
	@./arrayList/array_list_test


.DEFAULT_GOAL := al_test
# .DEFAULT_GOAL := say_bye
