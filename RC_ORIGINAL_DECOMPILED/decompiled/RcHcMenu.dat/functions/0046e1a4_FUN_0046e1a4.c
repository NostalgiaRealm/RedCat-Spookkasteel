/*
 * FUN_0046e1a4 at 0046e1a4
 * undefined __register FUN_0046e1a4(int * param_1, undefined4 param_2)
 * Address ranges: 0046e1a4-0046e1ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 39 for TVariantField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 39 for
   TVariantField. Original bytes unchanged; names and types still inferred. */

void FUN_0046e1a4(int *param_1,undefined4 param_2)

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
  puStack_24 = &LAB_0046e1ee;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004053dc((VARIANTARG *)&local_14.n2,param_2);
  (**(code **)(*param_1 + 0xbc))(param_1,&local_14);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046e1f5;
  puStack_24 = (undefined1 *)0x46e1ed;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

