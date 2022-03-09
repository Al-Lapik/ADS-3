// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int low = 0, high = size - 1, count = 0, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (*(arr + mid) == value) {
      count++;
      break;
    } else {
        if (*(arr + mid) < value) {
          low = mid + 1;
        }
    } else {
      high = mid - 1;
    }
  }
  if (count != 0) {
    for (int i = mid + 1; *(arr + i) == value; i++)
      count++;
    for (int i = mid - 1; *(arr + i) == value; i--)
      count++;
  }
  return count;
}
