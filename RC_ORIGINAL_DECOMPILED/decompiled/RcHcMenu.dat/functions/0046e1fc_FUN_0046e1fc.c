/*
 * FUN_0046e1fc at 0046e1fc
 * undefined __register FUN_0046e1fc(int * param_1, undefined4 * param_2)
 * Address ranges: 0046e1fc-0046e245
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e1fc(int *param_1,undefined4 *param_2)

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
  puStack_24 = &LAB_0046e246;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004054ac((VARIANTARG *)&local_14.n2,param_2);
  (**(code **)(*param_1 + 0xbc))(param_1,&local_14);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046e24d;
  puStack_24 = (undefined1 *)0x46e245;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

