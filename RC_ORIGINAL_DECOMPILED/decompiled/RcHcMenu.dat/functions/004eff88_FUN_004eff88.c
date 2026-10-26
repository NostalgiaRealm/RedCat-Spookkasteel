/*
 * FUN_004eff88 at 004eff88
 * undefined __register FUN_004eff88(int * param_1)
 * Address ranges: 004eff88-004efff4;004efffc-004effff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eff88(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x205) == '\0') {
    puStack_14 = &LAB_004efff5;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    (**(code **)(*param_1 + 0xd8))();
    (**(code **)(*param_1 + 0xc4))();
    if (*(short *)((int)param_1 + 0x21a) != 0) {
      (*(code *)param_1[0x86])(param_1[0x87],param_1);
    }
    *in_FS_OFFSET = uStack_18;
    *PTR_DAT_005720f8 = 0;
    return;
  }
  return;
}

