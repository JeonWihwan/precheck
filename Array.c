 int index = 0;

void add(int a[], int val)
{
 if (index >= 5)
 {
  cout << "full" << endl;
  return;
 }
 a[index++] = val;
}

void delete1(int a[], int val) // 값 삭제
{
 if (index == 0)
 {
  cout << "삭제할 것이 없습니다." << endl;
  return;
 }
 for (int i = 0; i < index; i++)
 {
  if (a[i] == val)
  {
   // 첫번째
   if (i == 0)
   {
    for (int x = 1; x < index; x++)
    {
     a[x - 1] = a[x];
    }
    index--;
   }
   // 마지막
   else if (i == index - 1)
   {
    index--;
   }
   // 중간
   else
   {
    for (int x = i; x < index; x++)
    {
     a[x] = a[x + 1];
    }
    index--;
   }
  }
 }
}

void contains(int a[], int val) // 값이 배열에 있는지 확인.
{
 for (int i = 0; i < index; i++)
 {
  if (a[i] == val)
  {
   cout << "있습니다." << endl;
  }
 }
 cout << "없습니다" << endl;
}

int find(int a[], int val) // 몇번째 위치에 있는지
{
 for (int i = 0; i < index; i++)
 {
  if (a[i] == val) return i;
  else return -1;
 }
}
int main()
{
 int a[5];
 
 while (1)
 {
  int cho, val;
  for (int i = 0; i < index; i++)
  {
   printf("%d ", a[i]);
  }
  cout << endl;
  cout << "1. add" << endl;
  cout << "2. delete" << endl;
  cout << "3. contains" << endl;
  cout << "4. find" << endl;
  cout << "5. 종료" << endl;
  cin >> cho;

  switch (cho)
  {
  case 1:
   cin >> val;
   add(a, val);
   break;
  case 2:
   cin >> val;
   delete1(a, val);
   break;
  case 3:
   break;
  case 4:
   break;
  case 5:
   return 0;

}
}
}
}
}
}
}
