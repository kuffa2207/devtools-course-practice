// Copyright 2022 Melnikov Aleksei

#include <gtest/gtest.h>
#include <map>
#include <string>
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

TEST(Melnikov_Aleksei_huffman_code, get_canonical_code_test) {
    MinHeap c1;
    map<char, string> encoded_symbols;
    encoded_symbols[1] = "a";
    string code = "0";
    ASSERT_NO_THROW(c1.get_canonical_code(encoded_symbols));
}

TEST(Melnikov_Aleksei_huffman_code, get_bit_length_codes_test) {
    MinHeap c1;
    map<char, string> encoded_symbols;
    encoded_symbols[1] = "b";
    string code = "1";
    ASSERT_NO_THROW(c1.get_bit_length_codes(encoded_symbols));
}

TEST(Melnikov_Aleksei_huffman_code, get_canonical_codebooks_test) {
    MinHeap c1;
    int i;
    int* ic = new int;
    ASSERT_NO_THROW(c1.get_canonical_codebook(ic));
}

TEST(Melnikov_Aleksei_huffman_code, get_symbols_for_bit_length_test) {
    MinHeap c1;
    int i;
    int* ic = new int;
    int j = 6;
    ASSERT_NO_THROW(c1.get_symbols_for_bit_length(ic, j));
}

TEST(Melnikov_Aleksei_huffman_code, get_encoded_text_test) {
    MinHeap c1;
    map<char, string> canonical_codes;
    canonical_codes[1] = "a";
    string code = "0";
    string a = "text";
    ASSERT_NO_THROW(c1.get_encoded_text(a, canonical_codes));
}

TEST(Melnikov_Aleksei_huffman_code, get_decoded_text_test) {
    MinHeap c1;
    map<string, char> canonical_codes =
    { { "textss", '1' } };
    string a = "text";
    ASSERT_NO_THROW(c1.get_decoded_text(a, canonical_codes));
}

TEST(Melnikov_Aleksei_huffman_code, get_frequency_map_test) {
    MinHeap c1;
    string a = "text";
    ASSERT_NO_THROW(c1.get_frequency_map(a));
}













