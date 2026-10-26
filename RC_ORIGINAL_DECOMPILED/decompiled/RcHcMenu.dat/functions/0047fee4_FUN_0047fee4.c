/*
 * FUN_0047fee4 at 0047fee4
 * undefined __register FUN_0047fee4(undefined4 param_1, int * param_2)
 * Address ranges: 0047fee4-0047ff44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047fee4(undefined4 param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  int local_88;
  char local_84 [128];
  
  puStack_90 = &stack0xfffffffc;
  local_88 = 0;
  puStack_94 = &LAB_0047ff45;
  puStack_98 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_98;
  thunk_FUN_00479917(param_1);
  FUN_00403fe0(param_2,local_84,0x80);
  FUN_00409924(*param_2,&local_88);
  *in_FS_OFFSET = param_1;
  puStack_98 = &LAB_0047ff4c;
  FUN_00403db0(&local_88);
  return;
}

