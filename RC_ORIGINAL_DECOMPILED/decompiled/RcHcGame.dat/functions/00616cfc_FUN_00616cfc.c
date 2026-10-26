/*
 * FUN_00616cfc at 00616cfc
 * undefined FUN_00616cfc(void)
 * Address ranges: 00616cfc-00616d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00616cfc(int param_1)

{
  int iVar1;
  
  DAT_00747ea0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00747ea0 != (HANDLE)0x0) {
    iVar1 = FUN_00616d38();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00747ea0);
  }
  return 0;
}

