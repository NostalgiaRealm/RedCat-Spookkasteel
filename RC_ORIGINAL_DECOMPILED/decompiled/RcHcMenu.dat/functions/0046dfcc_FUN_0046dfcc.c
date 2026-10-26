/*
 * FUN_0046dfcc at 0046dfcc
 * undefined __register FUN_0046dfcc(int * param_1)
 * Address ranges: 0046dfcc-0046e00f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046dfcc(int *param_1)

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
  puStack_20 = &LAB_0046e010;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_1 + 0x5c))(param_1,&local_14);
  FUN_0040514c((VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046e017;
  puStack_20 = (undefined1 *)0x46e00f;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

