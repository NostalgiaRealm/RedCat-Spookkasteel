/*
 * FUN_004b0008 at 004b0008
 * undefined __register FUN_004b0008(int * param_1, int * param_2)
 * Address ranges: 004b0008-004b00e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 24 for TCustomTransparentControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 24 for
   TCustomTransparentControl. Original bytes unchanged; names and types still inferred. */

void FUN_004b0008(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int extraout_ECX;
  int iVar3;
  
  bVar2 = FUN_004afeec((int)param_1);
  if (bVar2) {
    FUN_004325e0(param_1,param_2,extraout_ECX);
  }
  else if (param_2 != (int *)param_1[9]) {
    iVar3 = extraout_ECX;
    if ((*(short *)((int)param_1 + 0x202) != 0) && (param_1[9] != 0)) {
      iVar1 = param_1[9];
      *(int *)(iVar1 + 0x28) = param_1[0x80];
      iVar3 = param_1[0x81];
      *(int *)(iVar1 + 0x2c) = iVar3;
      param_1[0x80] = 0;
      param_1[0x81] = 0;
    }
    FUN_004325e0(param_1,param_2,iVar3);
    if (param_1[9] != 0) {
      if (*(code **)(param_1[9] + 0x28) != FUN_004affb0) {
        param_1[0x80] = *(int *)(param_1[9] + 0x28);
        param_1[0x81] = *(int *)(param_1[9] + 0x2c);
        iVar3 = param_1[9];
        *(int **)(iVar3 + 0x2c) = param_1;
        *(code **)(iVar3 + 0x28) = FUN_004affb0;
      }
    }
  }
  return;
}

