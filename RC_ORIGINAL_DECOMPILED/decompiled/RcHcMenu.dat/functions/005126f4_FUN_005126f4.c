/*
 * FUN_005126f4 at 005126f4
 * undefined __register FUN_005126f4(int param_1, undefined4 * param_2)
 * Address ranges: 005126f4-0051271a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005126f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

