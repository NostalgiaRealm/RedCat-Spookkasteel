/*
 * FUN_004f64ec at 004f64ec
 * undefined __register FUN_004f64ec(int * param_1)
 * Address ranges: 004f64ec-004f6523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 48 for TPageControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 48 for
   TPageControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f64ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_004f4fd4(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_004f4fd4(param_1);
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x84] + 0x18))((int *)param_1[0x84],uVar2);
    FUN_004f6404(param_1,piVar3);
    return;
  }
  FUN_004f6404(param_1,(int *)0x0);
  return;
}

