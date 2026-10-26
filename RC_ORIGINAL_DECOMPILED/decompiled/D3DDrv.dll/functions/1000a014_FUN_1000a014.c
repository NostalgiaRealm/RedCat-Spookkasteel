/*
 * FUN_1000a014 at 1000a014
 * undefined4 __cdecl FUN_1000a014(int param_1)
 * Address ranges: 1000a014-1000a04f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000a014(int param_1)

{
  int iVar1;
  
  DAT_101c3dec = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_101c3dec != (HANDLE)0x0) {
    iVar1 = FUN_1000a1d0();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_101c3dec);
  }
  return 0;
}

