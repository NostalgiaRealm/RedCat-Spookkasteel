/*
 * FUN_0043705c at 0043705c
 * undefined __register FUN_0043705c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0043705c-004370e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043705c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_004370e6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (PTR_DAT_0057261c[8] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (param_1[0x56] != 0) {
      FUN_0044f570(*(int *)PTR_DAT_005725f0,(int *)&local_8,param_3);
      iVar2 = FUN_00409870((undefined *)param_1[0x56],local_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_005725f0 + 0x30),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    if ((char)param_1[0x55] == '\0') {
      FUN_00438988(param_1);
      FUN_0043ce84();
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004370ed;
  puStack_14 = (undefined1 *)0x4370e5;
  FUN_00403db0((int *)&local_8);
  return;
}

