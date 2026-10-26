/*
 * FUN_0051cc48 at 0051cc48
 * undefined __register FUN_0051cc48(int param_1, uint * param_2)
 * Address ranges: 0051cc48-0051ccab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cc48(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x51cc5c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  bVar1 = true;
  puStack_14 = &LAB_0051ccac;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404140(*(uint **)(local_8 + 0x2c),local_c);
  if (!bVar1) {
    FUN_00403e04((int *)(local_8 + 0x2c),local_c);
    FUN_0051f14c(*(int **)(local_8 + 0x3c),local_8);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051ccb3;
  puStack_14 = (undefined1 *)0x51ccab;
  FUN_00403db0((int *)&local_c);
  return;
}

