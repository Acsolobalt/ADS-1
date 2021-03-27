// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
 int count = 0;
  if (arr[size / 2] == value) {
   int count1 = 0, count2 = 0;
    do {
     ++count1;
    } while (arr[size / 2 + count1] == value);
    do {
     ++count2;
    } while (arr[size / 2 - count2] == value);
    return count1 + count2 - 1;
  } else {
   if (arr[size / 2] > value) {
    return cbinsearch(arr, size / 2, value);
   } else {
    return cbinsearch(arr + size / 2 + 1, size / 2, value);
   }
  }
  return 0; // если ничего не найдено
}
