/*
 * FUN_004f99a4 at 004f99a4
 * undefined __register FUN_004f99a4(int * param_1, char param_2)
 * Address ranges: 004f99a4-004f99e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f99a4(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4f99af;
  local_8 = FUN_00403434(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8[0x89] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f99f1;
  uStack_14 = 0x4f99e9;
  FUN_004349bc(local_8,extraout_DL & 0xfc);
  return;
}

