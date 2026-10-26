/*
 * FUN_004a0968 at 004a0968
 * undefined __register FUN_004a0968(int * param_1, undefined4 param_2)
 * Address ranges: 004a0968-004a09d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 21 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 21 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0968(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int local_14;
  int local_10;
  
  (**(code **)(*(int *)param_1[10] + 0x14))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    local_14 = *(int *)(param_1[10] + 4) + -1;
    if (*(int *)(param_1[10] + 4) == 0) {
      local_14 = thunk_FUN_00402874(0xffffffff);
    }
    if (local_14 == -1) {
      local_14 = thunk_FUN_00402874(0xffffffff);
    }
    local_14 = local_14 + 1;
    local_10 = 0;
    do {
      piVar2 = (int *)(**(code **)(*param_1 + 0x70))(param_1,local_10);
      (**(code **)(*piVar2 + 0x54))(piVar2,param_2);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

