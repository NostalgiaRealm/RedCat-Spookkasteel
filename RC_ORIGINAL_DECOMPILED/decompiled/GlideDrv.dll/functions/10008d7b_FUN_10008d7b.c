/*
 * FUN_10008d7b at 10008d7b
 * int __cdecl FUN_10008d7b(LPSTR param_1, WCHAR param_2)
 * Address ranges: 10008d7b-10008dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008d7b(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_101f572c);
  bVar2 = DAT_101f5728 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_101f572c);
    FUN_10006171(0x13);
  }
  iVar1 = FUN_10008dd4(param_1,param_2);
  if (bVar2) {
    FUN_100061d2(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_101f572c);
  }
  return iVar1;
}

