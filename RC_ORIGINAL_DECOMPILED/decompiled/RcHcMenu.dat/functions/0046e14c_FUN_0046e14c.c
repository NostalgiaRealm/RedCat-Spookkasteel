/*
 * FUN_0046e14c at 0046e14c
 * undefined __register FUN_0046e14c(int * param_1)
 * Address ranges: 0046e14c-0046e193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 38 for TVariantField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 38 for
   TVariantField. Original bytes unchanged; names and types still inferred. */

void FUN_0046e14c(int *param_1)

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
  puStack_20 = &LAB_0046e194;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00405414((VARIANTARG *)&local_14.n2);
  (**(code **)(*param_1 + 0xbc))(param_1,&local_14);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046e19b;
  puStack_20 = (undefined1 *)0x46e193;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

