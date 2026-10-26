/*
 * FUN_004f6f50 at 004f6f50
 * undefined __register FUN_004f6f50(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004f6f50-004f6fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 40 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 40 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f6f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  if (*(int *)(param_1 + 500) == 0) {
    uVar1 = FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
    *(undefined4 *)(param_1 + 500) = uVar1;
  }
  puStackY_14 = (undefined1 *)0x4f6f94;
  piVar2 = FUN_00414e2c((int *)&PTR_FUN_004112c0,'\x01',*(int *)(param_1 + 500),0x400);
  puStackY_14 = &LAB_004f6fdc;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00417774((int)piVar2,*(int *)(param_1 + 0x1f0),extraout_ECX);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x4f6fcb;
  FUN_00403094(piVar2);
  puStackY_14 = (undefined1 *)0x4f6fdb;
  FUN_004147c0(*(int **)(param_1 + 500),0);
  return;
}

