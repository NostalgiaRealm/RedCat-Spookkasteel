/*
 * FUN_00412f38 at 00412f38
 * undefined __register FUN_00412f38(int * param_1)
 * Address ranges: 00412f38-00412f91;00412f99-00412f9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412f38(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x412f54;
    (**(code **)(*param_1 + 0x14))();
    puStack_14 = &LAB_00412f92;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < (int)((undefined4 *)param_1[2])[2]) {
      piVar2 = (int *)FUN_0041246c((undefined4 *)param_1[2]);
      FUN_00403094(piVar2);
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x412f99;
    puStack_14 = (undefined1 *)0x412f91;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  return;
}

