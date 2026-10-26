/*
 * FUN_00513b78 at 00513b78
 * undefined __register FUN_00513b78(undefined4 param_1, undefined * param_2, int * param_3)
 * Address ranges: 00513b78-00513bfc;00513c1e-00513c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 71 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 71 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513b78(undefined4 param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  double dVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_24 = (undefined1 *)0x513b92;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_28 = &LAB_00513c34;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (local_c == (undefined *)0x0) {
    puStack_30 = (undefined1 *)0x513bb8;
    puStack_24 = &stack0xfffffffc;
    iVar1 = FUN_00403224(param_3,(int)&PTR_FUN_00512d68);
    puStack_30 = (undefined1 *)0x513bbd;
    FUN_00501074(iVar1);
  }
  else {
    puStack_34 = &LAB_00513bfd;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    puStack_24 = &stack0xfffffffc;
    FUN_0040ab80(local_c);
    dVar2 = (double)in_ST0;
    iVar1 = FUN_00403224(param_3,(int)&PTR_FUN_00512d68);
    FUN_005130d4(iVar1,extraout_EDX,extraout_ECX,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
    *in_FS_OFFSET = uStack_38;
  }
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00513c3b;
  puStack_28 = (undefined1 *)0x513c33;
  FUN_00403db0((int *)&local_c);
  return;
}

