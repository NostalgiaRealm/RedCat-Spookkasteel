/*
 * FUN_0040297b at 0040297b
 * undefined4 __cdecl FUN_0040297b(int param_1)
 * Address ranges: 0040297b-004029b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040297b(int param_1)

{
  int iVar1;
  
  DAT_00409364 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00409364 != (HANDLE)0x0) {
    iVar1 = FUN_00403b55();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00409364);
  }
  return 0;
}

