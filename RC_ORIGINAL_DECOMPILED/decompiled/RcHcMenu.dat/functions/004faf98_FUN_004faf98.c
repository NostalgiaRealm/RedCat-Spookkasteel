/*
 * FUN_004faf98 at 004faf98
 * undefined __register FUN_004faf98(int * param_1)
 * Address ranges: 004faf98-004fb088
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 60 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 60 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_004faf98(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_128;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_004fb089;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  iVar1 = FUN_00543858((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00543858((int)local_8);
    uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0048ce0c);
    if ((char)uVar3 == '\0') {
      FUN_00402fe0(*local_8,local_110);
      FUN_00403fd4(&local_10,local_110);
      pcStack_128 = "AppProp is not a TGenericFKProp type.";
      FUN_004040f0(&local_c,3);
      FUN_00403d94(local_c);
    }
  }
  iVar1 = FUN_00543858((int)local_8);
  if (iVar1 == 0) {
    FUN_00541c0c((int)local_8,(int *)0x0);
  }
  else {
    piVar2 = (int *)FUN_00543858((int)local_8);
    piVar2 = (int *)FUN_00403224(piVar2,(int)&PTR_FUN_0048ce0c);
    piVar2 = (int *)FUN_004744a0(piVar2);
    piVar2 = (int *)FUN_00494858(piVar2);
    FUN_00541c0c((int)local_8,piVar2);
  }
  FUN_00543cd0();
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

