/*
 * FUN_0046e0f4 at 0046e0f4
 * undefined __register FUN_0046e0f4(int * param_1)
 * Address ranges: 0046e0f4-0046e13b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e0f4(int *param_1)

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
  puStack_20 = &LAB_0046e13c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0040542c((VARIANTARG *)&local_14.n2);
  (**(code **)(*param_1 + 0xbc))(param_1,&local_14);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046e143;
  puStack_20 = (undefined1 *)0x46e13b;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

