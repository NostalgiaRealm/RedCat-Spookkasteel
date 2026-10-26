/*
 * FUN_004715cc at 004715cc
 * undefined __register FUN_004715cc(int * param_1)
 * Address ranges: 004715cc-0047163a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004715cc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_0047163b;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 0x8d) == '\f') {
    FUN_00471594(param_1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00471642;
  if (*(char *)((int)local_8 + 0x9b) == '\0') {
    puStack_10 = (undefined1 *)0x47162f;
    FUN_0047114c(local_8,'\0');
    puStack_10 = (undefined1 *)0x47163a;
    (**(code **)(*local_8 + 0x9c))();
  }
  else {
    puStack_10 = (undefined1 *)0x471618;
    FUN_0047114c(local_8,'\x01');
    puStack_10 = (undefined1 *)0x471623;
    (**(code **)(*local_8 + 0xcc))();
  }
  return;
}

