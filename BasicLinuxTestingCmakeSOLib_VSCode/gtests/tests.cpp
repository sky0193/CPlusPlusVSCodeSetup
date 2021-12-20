#include <gtest/gtest.h>
#include "../src/levenstein_distance.hpp"

TEST(LevensteinDistance, Levensteindistance_EmptyWord_Empty) { 
    LevensteinDistance y;
    auto result = y.calculate_levenstein_Distance();
    ASSERT_EQ(result, 1);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
