/*
 * FUN_1003146c at 1003146c
 * undefined FUN_1003146c(void)
 * Address ranges: 1003146c-100314c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003146c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1052a75c);
  bVar2 = DAT_1052a758 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1052a75c);
    FUN_1002e819(0x13);
  }
  uVar1 = FUN_100314c5(param_1,param_2);
  if (bVar2) {
    FUN_1002e87a(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1052a75c);
  }
  return uVar1;
}

