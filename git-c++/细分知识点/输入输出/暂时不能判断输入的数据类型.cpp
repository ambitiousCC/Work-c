#include <stdio.h>
#include <string.h>

class check
{
public:
static char* type (int vin) { return "int"; }
static char* type (float vin) { return "float"; }
static char* type (double vin) { return "double"; }
};

int main(int argc, char *argv[])
{
char tp[10];
int a;float b;double c;
strcpy(tp,check::type(a));
printf("%s\n",tp);

strcpy(tp,check::type(b));
printf("%s\n",tp);

strcpy(tp,check::type(c));
printf("%s\n",tp);

return 0;
}
