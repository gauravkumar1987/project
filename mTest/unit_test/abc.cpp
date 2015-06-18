#include<gtest/gtest.h>

class fun
{
public:
int value;
fun(int a)
	{	
	value=a;
	}
bool disp(int a)
	{
	if(a<0)
		{
		return false;
		}
	else
		{
		return true;
		}
	}
};

TEST(fun,consttest)
{
fun obj(10);
EXPECT_EQ(obj.value,10);
}

TEST(me,dispnegvalue)
{
fun obj(10);
EXPECT_FALSE(obj.disp(-3));
}


TEST(fun,dispposvalue)
{
fun obj(1);
EXPECT_TRUE(obj.disp(3));
}


TEST(fun,dispLoop)
{
fun obj(10);
for(int i=-3;i<=10;i++)
	{
	if(i<0)
		{
		EXPECT_FALSE(obj.disp(i));
		}
	else
		{
		EXPECT_TRUE(obj.disp(i));
		}
	}

}




