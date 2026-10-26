/*
 * FUN_00470974 at 00470974
 * undefined __register FUN_00470974(int param_1)
 * Address ranges: 00470974-004709bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470974(int param_1)

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
  puStack_20 = &LAB_004709bd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined1 *)(param_1 + 0x30) = 10;
  FUN_0040542c((VARIANTARG *)&local_14.n2);
  FUN_00470a54(param_1,(VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004709c4;
  puStack_20 = (undefined1 *)0x4709bc;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

