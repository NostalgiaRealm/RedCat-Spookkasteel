/*
 * FUN_005f0050 at 005f0050
 * undefined FUN_005f0050(void)
 * Address ranges: 005f0050-005f007b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f0050(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != *(int *)(param_1 + 0x30)) {
    do {
      FUN_005f3850(param_2);
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)(param_1 + 0x30));
  }
  return;
}

