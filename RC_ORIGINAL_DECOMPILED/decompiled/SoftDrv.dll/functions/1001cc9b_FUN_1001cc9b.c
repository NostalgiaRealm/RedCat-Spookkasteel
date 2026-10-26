/*
 * FUN_1001cc9b at 1001cc9b
 * undefined FUN_1001cc9b(void)
 * Address ranges: 1001cc9b-1001ccf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001cc9b(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1020e9e4);
  bVar2 = DAT_1020e9e0 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1020e9e4);
    FUN_1001a434(0x13);
  }
  uVar1 = FUN_1001ccf4(param_1,param_2);
  if (bVar2) {
    FUN_1001a495(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1020e9e4);
  }
  return uVar1;
}

