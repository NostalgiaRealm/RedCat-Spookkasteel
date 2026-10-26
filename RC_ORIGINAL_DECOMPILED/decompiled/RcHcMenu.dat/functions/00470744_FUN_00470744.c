/*
 * FUN_00470744 at 00470744
 * undefined __register FUN_00470744(int param_1, undefined4 param_2)
 * Address ranges: 00470744-0047078e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470744(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_24 = &LAB_0047078f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined1 *)(param_1 + 0x30) = 3;
  FUN_004053dc((VARIANTARG *)&local_14.n2,param_2);
  FUN_00470a54(param_1,(VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00470796;
  puStack_24 = (undefined1 *)0x47078e;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

