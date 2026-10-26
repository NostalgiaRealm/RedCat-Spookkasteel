/*
 * FUN_1000c964 at 1000c964
 * int __cdecl FUN_1000c964(LPSTR param_1, WCHAR param_2)
 * Address ranges: 1000c964-1000c9bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000c964(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_101c3a7c);
  bVar2 = DAT_101c3a78 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_101c3a7c);
    FUN_1000a15a(0x13);
  }
  iVar1 = FUN_1000c9bd(param_1,param_2);
  if (bVar2) {
    FUN_1000a1bb(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_101c3a7c);
  }
  return iVar1;
}

