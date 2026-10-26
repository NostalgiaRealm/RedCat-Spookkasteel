/*
 * FUN_004a0740 at 004a0740
 * undefined __register FUN_004a0740(int * param_1, undefined4 param_2)
 * Address ranges: 004a0740-004a07e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 20 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 20 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0740(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  int local_18;
  
  FUN_0049fa18(param_1);
  (**(code **)(*(int *)param_1[10] + 0x10))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    local_18 = *(int *)(param_1[10] + 4) + -1;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1[10] + 4) == 0) {
      local_18 = thunk_FUN_00402874(0xffffffff);
      uVar3 = extraout_ECX_00;
    }
    if (local_18 == -1) {
      local_18 = thunk_FUN_00402874(0xffffffff);
      uVar3 = extraout_ECX_01;
    }
    local_18 = local_18 + 1;
    do {
      piVar2 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',uVar3);
      (**(code **)(*piVar2 + 0x50))(piVar2,param_2);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar2);
      local_18 = local_18 + -1;
      uVar3 = extraout_ECX_02;
    } while (local_18 != 0);
    if ((char)param_1[8] != '\0') {
      FUN_004a0aa4(param_1);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

