/*
 * FUN_1000e954 at 1000e954
 * int __cdecl FUN_1000e954(LPSTR param_1, WCHAR param_2)
 * Address ranges: 1000e954-1000e9ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000e954(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_100ec4bc);
  bVar2 = DAT_100ec4b8 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_100ec4bc);
    FUN_1000b2ca(0x13);
  }
  iVar1 = FUN_1000e9ad(param_1,param_2);
  if (bVar2) {
    FUN_1000b32b(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_100ec4bc);
  }
  return iVar1;
}

