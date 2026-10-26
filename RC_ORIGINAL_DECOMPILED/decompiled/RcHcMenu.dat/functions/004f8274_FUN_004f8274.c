/*
 * FUN_004f8274 at 004f8274
 * undefined __register FUN_004f8274(int * param_1, char param_2)
 * Address ranges: 004f8274-004f82ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8274(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4f827f;
  local_8 = FUN_00403434(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f82b6;
  uStack_14 = 0x4f82ae;
  FUN_0042c5bc(local_8,extraout_DL & 0xfc);
  return;
}

