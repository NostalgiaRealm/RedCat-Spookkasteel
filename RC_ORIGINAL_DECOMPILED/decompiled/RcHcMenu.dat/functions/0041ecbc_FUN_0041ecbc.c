/*
 * FUN_0041ecbc at 0041ecbc
 * undefined __register FUN_0041ecbc(int param_1, uint param_2, int param_3)
 * Address ranges: 0041ecbc-0041ecff;0041ed1d-0041ed23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ecbc(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41ecd7;
  FUN_004121d8(*(int **)(param_1 + 4),param_3);
  puStack_20 = &LAB_0041ed00;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004121d8(*(int **)(param_1 + 8),param_2 & 0xffff);
  *in_FS_OFFSET = uStack_24;
  return;
}

