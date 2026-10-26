/*
 * FUN_00470868 at 00470868
 * undefined __register FUN_00470868(int param_1, undefined4 * param_2)
 * Address ranges: 00470868-004708b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470868(int param_1,undefined4 *param_2)

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
  puStack_24 = &LAB_004708b3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_004054ac((VARIANTARG *)&local_14.n2,param_2);
  FUN_00470a54(param_1,(VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004708ba;
  puStack_24 = (undefined1 *)0x4708b2;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

