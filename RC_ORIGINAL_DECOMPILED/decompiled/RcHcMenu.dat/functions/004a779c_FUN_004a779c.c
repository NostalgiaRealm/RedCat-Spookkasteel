/*
 * FUN_004a779c at 004a779c
 * undefined __register FUN_004a779c(int * param_1)
 * Address ranges: 004a779c-004a77e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 41 for TCustomGDIGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a6dac slot 41 for
   TCustomGDIGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a779c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  uVar3 = (**(code **)(*piVar1 + 0x20))();
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar3,uVar2);
  (**(code **)(*param_1 + 0x74))();
  return;
}

