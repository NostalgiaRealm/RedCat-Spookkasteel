/*
 * FUN_00518028 at 00518028
 * undefined __register FUN_00518028(int * param_1)
 * Address ranges: 00518028-00518085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00518028(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_10c [256];
  undefined *local_c;
  int *local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_114 = &LAB_00518086;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_10c);
  FUN_00403fd4((int *)&local_c,local_10c);
  FUN_00411fa4(local_c,local_8);
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_0051808d;
  puStack_114 = (undefined1 *)0x518085;
  FUN_00403db0((int *)&local_c);
  return;
}

