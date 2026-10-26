/*
 * FUN_004a031c at 004a031c
 * undefined __register FUN_004a031c(int * param_1)
 * Address ranges: 004a031c-004a03c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 24 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 24 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a031c(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int local_14;
  int local_c;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_0045b8fc((undefined4 *)param_1[0xc]);
    local_14 = *(int *)(param_1[10] + 4) + -1;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1[10] + 4) == 0) {
      local_14 = thunk_FUN_00402874(0xffffffff);
      uVar3 = extraout_ECX_00;
    }
    if (local_14 == -1) {
      local_14 = thunk_FUN_00402874(0xffffffff);
      uVar3 = extraout_ECX_01;
    }
    local_14 = local_14 + 1;
    local_c = 0;
    do {
      piVar2 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',uVar3);
      uVar3 = (**(code **)(*(int *)param_1[9] + 0x1c))((int *)param_1[9],local_c);
      (**(code **)(*piVar2 + 8))(piVar2,uVar3);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar2);
      local_c = local_c + 1;
      local_14 = local_14 + -1;
      uVar3 = extraout_ECX_02;
    } while (local_14 != 0);
    FUN_004a0048(param_1,param_1 + 9);
  }
  return;
}

