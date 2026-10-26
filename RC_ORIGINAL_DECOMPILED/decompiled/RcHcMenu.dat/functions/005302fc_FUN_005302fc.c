/*
 * FUN_005302fc at 005302fc
 * undefined __register FUN_005302fc(int param_1, byte * param_2, int * param_3)
 * Address ranges: 005302fc-005303b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 71 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 71 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_005302fc(int param_1,byte *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x530314;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_005303b1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0053361c(local_8,local_c,param_3);
  if (local_c == (byte *)0x0) {
    cVar1 = FUN_00530414(local_8);
    if (cVar1 != '\0') {
      FUN_00530514(local_8,(undefined4 *)PTR_DAT_00572068);
      piVar2 = (int *)FUN_00549b80(*(int *)(local_8 + 0x294));
      iVar3 = FUN_00403224(param_3,(int)&PTR_FUN_00531904);
      FUN_0053282c(iVar3,piVar2);
      piVar2 = (int *)FUN_00533c14(local_8);
      iVar3 = FUN_005285b8(piVar2);
      uVar4 = FUN_00523748(iVar3);
      iVar3 = FUN_00403224(param_3,(int)&PTR_FUN_00531904);
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005303b8;
  puStack_20 = (undefined1 *)0x5303b0;
  FUN_00403db0((int *)&local_c);
  return;
}

