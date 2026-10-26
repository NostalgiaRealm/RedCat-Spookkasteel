/*
 * FUN_0040d980 at 0040d980
 * undefined4 __cdecl FUN_0040d980(int param_1)
 * Address ranges: 0040d980-0040d9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040d980(int param_1)

{
  int iVar1;
  
  DAT_00413de0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00413de0 != (HANDLE)0x0) {
    iVar1 = FUN_0040d9bc();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00413de0);
  }
  return 0;
}

