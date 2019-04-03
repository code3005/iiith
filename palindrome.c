#include <stdio.h>

int valLen(char *val)
{
  int temp = 0;
  while (val[temp] != '\0')
    temp++;
  return temp;
}

int palindrome(char *val, int length)
{
  if (val[0] == val[length - 1])
  {
    int i = 0, j = length - 1, middle = length / 2;
    for(i=0;i<middle;i++)
    {
      if (val[i] != val[j])
      {
        return 0;
        break;
      }
      j--;
    }
    return 1;
  }
  else
    return 0;
}

int main()
{
  char val[50];
  printf("Enter String or Number : ");
  scanf("%s", val);

  int length = valLen(val);
  int res = palindrome(val, length);
    res == 0 ? printf("%s is not palindrome !\n", val) : printf("%s is palindrome !\n", val);
  
  return 0;
}