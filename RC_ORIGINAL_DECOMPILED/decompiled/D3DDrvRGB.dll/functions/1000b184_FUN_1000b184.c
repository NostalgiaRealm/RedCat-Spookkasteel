/*
 * FUN_1000b184 at 1000b184
 * undefined4 __cdecl FUN_1000b184(int param_1)
 * Address ranges: 1000b184-1000b1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000b184(int param_1)

{
  int iVar1;
  
  DAT_100ec82c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100ec82c != (HANDLE)0x0) {
    iVar1 = FUN_1000b340();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_100ec82c);
  }
  return 0;
}

