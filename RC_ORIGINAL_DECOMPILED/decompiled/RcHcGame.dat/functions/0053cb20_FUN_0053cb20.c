/*
 * FUN_0053cb20 at 0053cb20
 * undefined FUN_0053cb20(void)
 * Address ranges: 0053cb20-0053cb3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053cb20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0053cbc0(param_2);
  if (-1 < iVar1) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar1 * 4) + 0x28) = 1;
  }
  return;
}

