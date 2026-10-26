/*
 * FUN_005dfb80 at 005dfb80
 * undefined FUN_005dfb80(void)
 * Address ranges: 005dfb80-005dfbac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005dfb80(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,2);
    if (DVar1 != 0xffffffff) {
      SetEndOfFile(*(HANDLE *)(param_1 + 4));
    }
  }
  return 0;
}

