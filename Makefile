say_hello:
	@echo "Hello world"

say_bye:
	@echo "Bye"

CC = gcc

bst_test: ./trees/bst/test.c
	@${CC} ./trees/bst/test.c ./trees/bst/binary_search_tree.c ./arrayList/array_list.c -o ./trees/bst/binary_search_test
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

ll_test: ./linked_list/test.c
	@${CC} ./linked_list/test.c ./linked_list/linked_list.c -o ./linked_list/linked_list_test 
	@./linked_list/linked_list_test

stack_test: ./stack/test.c
	@${CC} ./stack/test.c ./stack/stack.c ./linked_list/linked_list.c -o ./stack/stack_test
	@./stack/stack_test

queue_test: ./queue/test.c
	@${CC} ./queue/test.c ./queue/queue.c ./arrayList/array_list.c -o ./queue/queue_test
	@./queue/queue_test

radix_sort_test: ./sorts/radix_sort/test.c
	@${CC} ./sorts/radix_sort/test.c ./sorts/radix_sort/radix_sort.c ./stack/stack.c ./linked_list/linked_list.c -o ./sorts/radix_sort/radix_sort_test
	@./sorts/radix_sort/radix_sort_test

# heap_test: ./linked_list/test.c
# 	@${cc} ./linked_list/test.c ./trees/heap/minHeap/minHeap.c ./arrayList/array_list.c -o ./trees/heap/minHeap/minHeap_test
# 	@./trees/heap/minHeap/minHeap_test
# ./trees/heap/minHeap/test.c
# trees/heap/minHeap/
.DEFAULT_GOAL := stack_test
#bst_test
# .DEFAULT_GOAL := say_bye
