/*
 * FUN_0053fff4 at 0053fff4
 * undefined __register FUN_0053fff4(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 0053fff4-0054006f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 50 for TAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 50 for
   TAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053fff4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  int local_18;
  uint local_14;
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  FUN_004f8d5c(param_1,param_2,param_3);
  iVar1 = FUN_0048ec24(param_1[0xef]);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_14 = 0;
    do {
      uVar3 = FUN_004f8944((int)param_1,local_14);
      uVar2 = local_14;
      if (100 < local_14) {
        uVar3 = thunk_FUN_00402874(uVar3);
        uVar2 = extraout_EDX;
      }
      param_1[uVar2 + 0x89] = uVar3;
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

