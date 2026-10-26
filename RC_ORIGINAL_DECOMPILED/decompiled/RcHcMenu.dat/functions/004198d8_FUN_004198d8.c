/*
 * FUN_004198d8 at 004198d8
 * undefined __register FUN_004198d8(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 004198d8-00419928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411560 slot 13 for TBasicAction. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411560 slot 13 for
   TBasicAction. Original bytes unchanged; names and types still inferred. */

void FUN_004198d8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 != param_1[0xc]) {
    iVar2 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00412384((undefined4 *)param_1[0x10],iVar3);
        (**(code **)(*piVar1 + 0x10))();
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1[0xc] = param_4;
    param_1[0xd] = param_5;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

