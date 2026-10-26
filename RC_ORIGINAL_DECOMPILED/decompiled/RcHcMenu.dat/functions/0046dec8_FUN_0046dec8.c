/*
 * FUN_0046dec8 at 0046dec8
 * undefined __register FUN_0046dec8(int * param_1)
 * Address ranges: 0046dec8-0046df0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 16 for TVariantField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46576c slot 16 for
   TVariantField. Original bytes unchanged; names and types still inferred. */

void FUN_0046dec8(int *param_1)

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
  puStack_20 = &LAB_0046df0c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_1 + 0x5c))(param_1,&local_14);
  FUN_004051b8((VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046df13;
  puStack_20 = (undefined1 *)0x46df0b;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

