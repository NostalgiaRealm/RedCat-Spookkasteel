/*
 * FUN_0053341c at 0053341c
 * undefined __register FUN_0053341c(int param_1)
 * Address ranges: 0053341c-005334d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 64 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 64 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0053341c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00533c14(param_1);
  *(int *)(iVar1 + 0x2d0) = param_1;
  iVar1 = FUN_00533c14(param_1);
  FUN_00432838(iVar1,'\0');
  iVar1 = FUN_00533c14(param_1);
  FUN_005217ac(iVar1,'\0');
  iVar1 = FUN_00533c14(param_1);
  *(undefined1 *)(iVar1 + 0x298) = 0;
  iVar1 = FUN_00533c14(param_1);
  FUN_00521710(iVar1,'\0');
  iVar1 = FUN_00533c14(param_1);
  FUN_00521894(iVar1,'\x01');
  piVar2 = (int *)FUN_00533c14(param_1);
  (**(code **)(*piVar2 + 0xe0))(piVar2,1);
  iVar1 = FUN_00533c14(param_1);
  *(undefined4 *)(iVar1 + 0x208) = 0xf;
  iVar1 = FUN_00533c14(param_1);
  *(undefined1 *)(iVar1 + 0x20e) = 0x13;
  iVar1 = FUN_00533c14(param_1);
  *(int *)(iVar1 + 0x264) = param_1;
  *(code **)(iVar1 + 0x260) = FUN_00532f80;
  return;
}

