#pragma once
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "ListFunc.cpp"

TEST_CASE("list testing", "[list]") {
	List list;

    SECTION("Empty") {
        CHECK(list.Empty() == 1);
    }
    SECTION("Size") {
        list.PushFront(1); list.PushFront(2); list.PushFront(3);
        CHECK(list.Size() == 3);
    }
    SECTION("Clear") {
        list.Clear();
        CHECK(list.Size() == 0);
    }
}

int main() {
	return Catch::Session().run();
}