/*
 * FUN_00558948 at 00558948
 * undefined __register FUN_00558948(int * param_1, int param_2, int param_3, int param_4, int * param_5)
 * Address ranges: 00558948-005589c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 31 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 31 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_00558948(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xf8))();
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 == '\0') {
    param_5 = (int *)(**(code **)(*piVar2 + 0x2c))();
    param_4 = (**(code **)(*piVar2 + 0x20))();
  }
  FUN_0049b884((int *)param_1[0x6c],param_5,param_4,(undefined *)0x20);
  FUN_00431dc0(param_1,param_2,param_3,param_4,(int)param_5);
  (**(code **)(*param_1 + 0xfc))();
  return;
}

