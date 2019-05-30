#include <iostream>
#include <cmath>

using namespace std;

#define X_DIVIDED_BY_Y 0.5
#define MAX_X (35.0 / X_DIVIDED_BY_Y)
#define MAX_Y 35.0
#define THRESHOLD 0.5
#define A 13

char getSentenceChar(const char *sentence, int &index) 
{
    while(true) 
	{
        if (index >= strlen(sentence)) 
		{
            index = 0;
        }
        char c = sentence[index++];

        if(' ' == c) 
		{
            index++;
        } 
		else 
		{
            return c;
        }
    }
}

float getX(float x)
{
    return (x - MAX_X / 2) * X_DIVIDED_BY_Y;
}

float getY(float y) 
{
    return MAX_Y / 7.0 - y;
}

bool func(float x, float y) 
{
    return (pow(x, 2) + pow(y, 2) + A * x - A * sqrt(pow(x, 2) + pow(y, 2))) < THRESHOLD;
}

int main(int argc, char** argv) 
{
    const char *LOVE_SENTENCE = "No rose, no diamond ring, that is the simple and romantic love stories in college. The graduates have to face the approaching of June, a time to farewell their beloved. When their future is confronted with love, which one is more important? What will the lovers do in June?";
    int sentenceIndex = 0;

    for (int y = 0; y <= MAX_Y; y++) 
	{
        for (int x = 0; x <= MAX_X; x++) 
		{
            cout<<(func(getY(y), getX(x)) ? getSentenceChar(LOVE_SENTENCE, sentenceIndex) : '.');
        }
        cout<<endl;
    }

	return 0;
}
