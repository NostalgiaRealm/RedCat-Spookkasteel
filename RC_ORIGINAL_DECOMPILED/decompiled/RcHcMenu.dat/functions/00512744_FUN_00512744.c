/*
 * FUN_00512744 at 00512744
 * undefined __register FUN_00512744(int param_1, undefined4 * param_2)
 * Address ranges: 00512744-0051276a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00512744(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

