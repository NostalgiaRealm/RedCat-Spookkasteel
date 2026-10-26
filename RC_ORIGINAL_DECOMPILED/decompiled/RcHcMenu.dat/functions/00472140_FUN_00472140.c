/*
 * FUN_00472140 at 00472140
 * undefined __register FUN_00472140(int param_1, undefined1 param_2, int * param_3, VARIANT * param_4)
 * Address ranges: 00472140-004721a0;004721a8-004721bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472140(int param_1,undefined1 param_2,int *param_3,VARIANT *param_4)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if ((*(char *)((int)param_3 + 0x36) != '\0') && (*(char *)((int)param_3 + 0x36) != '\x03')) {
    puStack_18 = (undefined1 *)0x4721b5;
    FUN_00404e28(param_4,(VARIANTARG *)PTR_DAT_00572068);
    return;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x8d);
  *(undefined1 *)(param_1 + 0x8d) = param_2;
  puStack_1c = &LAB_004721a1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_3 + 0x5c))(param_3,param_4);
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x8d) = uVar1;
  return;
}

