/*
 * FUN_004d4d8c at 004d4d8c
 * undefined __register FUN_004d4d8c(int * param_1)
 * Address ranges: 004d4d8c-004d4dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4d8c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_1c;
  uint local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_24 = &LAB_004d4dd4;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  FUN_004d4d70(param_1,&local_1c);
  local_c = FUN_0040514c((VARIANTARG *)&local_1c.n2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d4ddb;
  puStack_24 = (undefined1 *)0x4d4dd3;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

