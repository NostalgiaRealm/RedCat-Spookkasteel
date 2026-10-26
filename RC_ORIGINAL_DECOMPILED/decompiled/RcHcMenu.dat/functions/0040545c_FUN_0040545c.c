/*
 * FUN_0040545c at 0040545c
 * undefined __register FUN_0040545c(VARIANTARG * param_1, byte * param_2)
 * Address ranges: 0040545c-0040549e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040545c(VARIANTARG *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0040549f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403fd4((int *)&local_8,param_2);
  FUN_004054ac(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004054a6;
  puStack_18 = (undefined1 *)0x40549e;
  FUN_00403db0((int *)&local_8);
  return;
}

