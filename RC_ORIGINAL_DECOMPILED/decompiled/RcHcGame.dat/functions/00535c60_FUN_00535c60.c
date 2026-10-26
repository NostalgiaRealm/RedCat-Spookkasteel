/*
 * FUN_00535c60 at 00535c60
 * undefined FUN_00535c60(void)
 * Address ranges: 00535c60-00535c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00535c60(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + param_3 * 4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

