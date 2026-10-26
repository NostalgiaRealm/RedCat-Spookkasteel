/*
 * FUN_004efdb4 at 004efdb4
 * undefined __register FUN_004efdb4(int * param_1, char param_2)
 * Address ranges: 004efdb4-004efe5a;004efe62-004efe66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004efdb4(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x205) != '\0') {
    puStack_18 = &LAB_004efe5b;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puVar1 = &stack0xfffffffc;
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 200))();
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    (**(code **)(*param_1 + 0xd4))();
    if (*(short *)((int)param_1 + 0x212) != 0) {
      (*(code *)param_1[0x84])(param_1[0x85],param_1);
    }
    if (((char)param_1[0x81] == '\0') && (*(short *)((int)param_1 + 0x20a) != 0)) {
      (*(code *)param_1[0x82])(param_1[0x83],param_1);
    }
    *in_FS_OFFSET = uStack_1c;
    *PTR_DAT_005720f8 = 1;
    return;
  }
  return;
}

