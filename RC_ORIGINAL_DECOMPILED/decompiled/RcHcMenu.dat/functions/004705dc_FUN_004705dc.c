/*
 * FUN_004705dc at 004705dc
 * undefined __register FUN_004705dc(int param_1)
 * Address ranges: 004705dc-00470624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004705dc(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 local_14;
  
  puStack_1c = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_20 = &LAB_00470625;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined1 *)(param_1 + 0x30) = 6;
  FUN_00405414((VARIANTARG *)&local_14.n2);
  FUN_00470a54(param_1,(VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0047062c;
  puStack_20 = (undefined1 *)0x470624;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

