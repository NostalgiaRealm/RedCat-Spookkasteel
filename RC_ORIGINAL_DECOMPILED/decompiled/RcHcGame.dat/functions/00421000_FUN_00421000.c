/*
 * FUN_00421000 at 00421000
 * undefined FUN_00421000(void)
 * Address ranges: 00421000-0042101f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00421000(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

