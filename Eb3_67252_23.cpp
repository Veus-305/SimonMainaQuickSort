void quickSort(int numbers[], int start, int end)
{
if (start < end)
{
int specialNumber = numbers[end];
int smallerItemsPosition = start - 1;
for (int currentPosition = start; currentPosition < end; currentPosition++)
{
if (numbers[currentPosition] > specialNumber)
{
smallerItemsPosition++;
int temporary = numbers[smallerItemsPosition];
numbers[smallerItemsPosition] = numbers[currentPosition];
numbers[currentPosition] = temporary;
}
}
int temporary = numbers[smallerItemsPosition + 1];
numbers[smallerItemsPosition + 1] = numbers[end];
numbers[end] = temporary;
int correctPositionOfSpecial = smallerItemsPosition + 1;
quickSort(numbers, start, correctPositionOfSpecial - 1);
quickSort(numbers, correctPositionOfSpecial + 1, end);
}
}