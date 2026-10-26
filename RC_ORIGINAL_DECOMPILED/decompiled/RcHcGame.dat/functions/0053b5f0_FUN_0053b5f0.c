/*
 * FUN_0053b5f0 at 0053b5f0
 * undefined FUN_0053b5f0(void)
 * Address ranges: 0053b5f0-0053b61e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_0053b5f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return true;
  }
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  return iVar2 / 0x1c + iVar1 == iVar1;
}

