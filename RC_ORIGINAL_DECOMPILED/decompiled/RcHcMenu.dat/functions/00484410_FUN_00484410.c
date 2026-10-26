/*
 * FUN_00484410 at 00484410
 * undefined __register FUN_00484410(int * param_1)
 * Address ranges: 00484410-004844b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 113 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 113 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00484410(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar1;
  
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  FUN_00485aac((int)param_1);
  uVar1 = extraout_ECX;
  if (*(char *)((int)param_1 + 0x1b2) != '\0') {
    FUN_00486d94((int)param_1,'\0');
    FUN_00486abc((int)param_1,'\0');
    uVar1 = extraout_ECX_00;
    if (*(char *)((int)param_1 + 0x1f2) != '\0') {
      thunk_FUN_00478c4d(param_1 + 0x5a);
      uVar1 = extraout_ECX_01;
    }
    if (param_1[0x5a] != 0) {
      thunk_FUN_00478e24(param_1 + 0x5a);
      uVar1 = extraout_ECX_02;
    }
  }
  FUN_00471d20((int)param_1,0,uVar1);
  if (*(char *)((int)param_1 + 0x96) != '\0') {
    (**(code **)(*param_1 + 0xb4))();
  }
  param_1[0x78] = 0;
  *(undefined2 *)((int)param_1 + 0x1b6) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((int)param_1 + 0x1b1) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  return;
}

