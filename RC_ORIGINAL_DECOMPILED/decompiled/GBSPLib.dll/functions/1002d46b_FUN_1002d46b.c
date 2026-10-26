/*
 * FUN_1002d46b at 1002d46b
 * undefined FUN_1002d46b(void)
 * Address ranges: 1002d46b-1002d4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002d46b(int param_1)

{
  int iVar1;
  
  DAT_1052a9b4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1052a9b4 != (HANDLE)0x0) {
    DAT_1052a9b8 = FUN_1002d323();
    if (DAT_1052a9b8 == 3) {
      iVar1 = FUN_1002d570(0x3f8);
    }
    else {
      if (DAT_1052a9b8 != 2) {
        return 1;
      }
      iVar1 = FUN_1002e0b7();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1052a9b4);
  }
  return 0;
}

