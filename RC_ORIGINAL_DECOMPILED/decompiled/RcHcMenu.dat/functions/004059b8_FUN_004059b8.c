/*
 * FUN_004059b8 at 004059b8
 * undefined __register FUN_004059b8(VARIANTARG * param_1, VARIANTARG * param_2)
 * Address ranges: 004059b8-00405a10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004059b8(VARIANTARG *param_1,VARIANTARG *param_2)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char *local_c;
  char *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  puStack_1c = &LAB_00405a11;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004052a4((int *)&local_8,param_2);
  pcVar1 = local_8;
  FUN_004052a4((int *)&local_c,param_1);
  FUN_00405988(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00405a18;
  puStack_1c = (undefined1 *)0x405a10;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

