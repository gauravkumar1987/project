#include<gmock/gmock.h>

class fun
{
public:
int value;
fun(int a)
{
	value=a;
	}

};

TEST(fun,consttest)
{
fun obj(10);
EXPECT_EQ(obj.value,10);
}
