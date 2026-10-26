/*
 * FUN_00528500 at 00528500
 * undefined __register FUN_00528500(int * param_1, char param_2)
 * Address ranges: 00528500-0052859b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00528500(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x52850b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0052859c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[0xa4] != 0) {
    puStack_10 = &stack0xfffffffc;
    FUN_00528810(local_8,(int *)0x0);
  }
  FUN_00403094((int *)local_8[0xa5]);
  local_8[0xa5] = 0;
  FUN_00403094((int *)local_8[0xa0]);
  local_8[0xa0] = 0;
  FUN_00403094((int *)local_8[0xa9]);
  local_8[0xa9] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005285a3;
  puStack_14 = (undefined1 *)0x52859b;
  FUN_00520a78(local_8,local_9 & 0xfc);
  return;
}

