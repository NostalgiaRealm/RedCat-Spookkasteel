/*
 * FUN_00423634 at 00423634
 * undefined __register FUN_00423634(int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00423634-0042369a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x423364 slot 1 for TComponentList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x423364 slot 1 for
   TComponentList. Original bytes unchanged; names and types still inferred. */

void FUN_00423634(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar2 = FUN_00418f00((int *)&PTR_FUN_00423534,'\x01',(int *)0x0);
    *(int **)(param_1 + 0x14) = piVar2;
    piVar2[0xb] = param_1;
    piVar2[10] = (int)&LAB_00423624;
    uVar3 = extraout_ECX;
  }
  cVar1 = (char)param_3;
  if (cVar1 == '\0') {
    if (param_2 != (int *)0x0) {
      FUN_00418fe0((int)param_2,*(int *)(param_1 + 0x14),uVar3);
    }
  }
  else if (((byte)(cVar1 - 1U) < 2) && (param_2 != (int *)0x0)) {
    FUN_00419210((int)param_2,*(int *)(param_1 + 0x14));
  }
  FUN_004234b4(param_1,param_2,cVar1);
  return;
}

