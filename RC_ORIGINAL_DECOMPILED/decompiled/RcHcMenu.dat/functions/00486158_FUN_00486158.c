/*
 * FUN_00486158 at 00486158
 * undefined __register FUN_00486158(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00486158-004861e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 102 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 102 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00486158(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  bool bVar5;
  
  uVar1 = FUN_004714b4((int)param_1);
  if ((char)uVar1 == '\0') {
    FUN_00473ac4((int)param_1,extraout_EDX,extraout_ECX,param_4,param_5);
  }
  else {
    FUN_00473b1c(param_1);
    bVar5 = *(short *)((int)param_1 + 0x15a) != 0;
    uVar4 = CONCAT31((int3)((uint)extraout_EDX_00 >> 8),bVar5);
    uVar3 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),param_4._2_2_ != 0);
    if (bVar5 != (param_4._2_2_ != 0)) {
      if (param_4._2_2_ == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00485dfc((int)param_1);
      }
      FUN_00485fc8(param_1,param_1 + 0x62,iVar2);
      uVar3 = extraout_ECX_01;
      uVar4 = extraout_EDX_01;
    }
    FUN_00473ac4((int)param_1,uVar4,uVar3,param_4,param_5);
    if ((char)param_1[0x26] != '\0') {
      FUN_00473334(param_1);
    }
  }
  return;
}

