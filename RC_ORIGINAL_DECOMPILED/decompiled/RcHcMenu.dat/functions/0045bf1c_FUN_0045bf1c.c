/*
 * FUN_0045bf1c at 0045bf1c
 * undefined __register FUN_0045bf1c(undefined4 param_1)
 * Address ranges: 0045bf1c-0045bf7b;0045bfbd-0045bfd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045bf1c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_c;
  undefined4 local_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_128 = &stack0xfffffffc;
  local_c = 0;
  puStack_120 = &LAB_0045bfd3;
  local_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_124;
  puStack_12c = &LAB_0045bf7c;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (DAT_005704ec != 0) {
    FUN_0045c3c8(DAT_005704ec);
    *(undefined1 *)(DAT_005704ec + 4) = 1;
    FUN_0040e4b4(&DAT_005704ec);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  *in_FS_OFFSET = uStack_130;
  *in_FS_OFFSET = local_124;
  puStack_11c = &LAB_0045bfda;
  puStack_120 = (undefined1 *)0x45bfd2;
  FUN_00403db0(&local_c);
  return;
}

