/*
 * FUN_00513c48 at 00513c48
 * undefined __register FUN_00513c48(int param_1, undefined4 * param_2)
 * Address ranges: 00513c48-00513cd2;00513d27-00513d3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 72 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 72 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513c48(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  double dVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14 [2];
  undefined4 *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14[0] = 0;
  puStack_28 = &LAB_00513d3d;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined1 *)0x513c7a;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0040320c((int *)*param_2,(int)&PTR_FUN_00512d68);
  if ((char)uVar1 == '\0') {
    puStack_30 = (undefined1 *)0x513c92;
    FUN_00403d94("Assertion failure");
  }
  puStack_34 = &LAB_00513cd3;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  iVar2 = FUN_00513f3c(local_8);
  FUN_004fcb4c(iVar2);
  dVar3 = (double)in_ST0;
  iVar2 = FUN_00403224((int *)*local_c,(int)&PTR_FUN_00512d68);
  FUN_005130d4(iVar2,extraout_EDX,extraout_ECX,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  *in_FS_OFFSET = uStack_38;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00513d44;
  puStack_28 = (undefined1 *)0x513d3c;
  FUN_00403db0(local_14);
  return;
}

