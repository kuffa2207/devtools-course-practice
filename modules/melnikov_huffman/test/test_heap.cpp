// Copyright 2022 Melnikov Aleksei

#include <gtest/gtest.h>
#include "include/huffman_code.h"



TEST(Melnikov_Aleksei_huffman_code, start) {
	ASSERT_NO_THROW(Node());
}

TEST(Melnikov_Aleksei_huffman_code, get_left_child_test) {
	MinHeap c1;
	int i = 1;
	ASSERT_NO_THROW(c1.get_left_child(i));
}

TEST(Melnikov_Aleksei_huffman_code, get_left_child_test_count) {
	MinHeap c1;
	int i = 1;
	ASSERT_EQ(c1.get_left_child(i), 3);
}

TEST(Melnikov_Aleksei_huffman_code, get_right_child_test) {
	MinHeap c1;
	int i = 1;
	ASSERT_NO_THROW(c1.get_right_child(i));
}

TEST(Melnikov_Aleksei_huffman_code, get_right_child_test_count) {
	MinHeap c1;
	int i = 1;
	ASSERT_EQ(c1.get_right_child(i), 4);
}

TEST(Melnikov_Aleksei_huffman_code, get_parent_test) {
	MinHeap c1;
	int i = 1;
	ASSERT_NO_THROW(c1.get_parent(i));
}

TEST(Melnikov_Aleksei_huffman_code, build_heap_test) {
	MinHeap c1;
	ASSERT_NO_THROW(c1.build_heap());
}

TEST(Melnikov_Aleksei_huffman_code, print_heap_test) {
	MinHeap c1;
	ASSERT_NO_THROW(c1.print_heap());
}


TEST(Melnikov_Aleksei_huffman_code, min_heapify_test) {
	MinHeap c1;
	int i = 1;
	ASSERT_NO_THROW(c1.min_heapify(i));
}

TEST(Melnikov_Aleksei_huffman_code, min_heapify_test_count) {
	MinHeap c1;
	int i = 5;
	int j = 0;
	ASSERT_EQ(c1.min_heapify(i), j);
}

TEST(Melnikov_Aleksei_huffman_code, get_bit_size_test) {
	MinHeap c1;
	int i = 1;
	ASSERT_NO_THROW(c1.get_bit_size(i));
}

TEST(Melnikov_Aleksei_huffman_code, get_bit_size_test_count) {
	MinHeap c1;
	int i = 2;
	int j = 2;
	ASSERT_EQ(c1.get_bit_size(i), j);
}

TEST(Melnikov_Aleksei_huffman_code, get_binary_string_test) {
	MinHeap c1;
	int i = 1;
	int bit = -1;
	ASSERT_NO_THROW(c1.get_binary_string(i, bit));
}








