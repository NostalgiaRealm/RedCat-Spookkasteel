/*
 * FUN_00472e58 at 00472e58
 * undefined4 __register FUN_00472e58(int * param_1)
 * Address ranges: 00472e58-00472ecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 82 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 82 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00472e58(int *param_1)

{
  int iVar1;
  char cVar2;
  
  if (0 < param_1[0x11]) {
    (**(code **)(*param_1 + 0x184))(param_1,0);
  }
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x1b8))
                    (param_1,*(undefined4 *)(param_1[0x14] + param_1[0x11] * 4),2,1);
  if (cVar2 == '\0') {
    if (param_1[0x11] == 0) {
      (**(code **)(*param_1 + 0x118))();
    }
    else {
      FUN_00473080((int)param_1,param_1[0x11],0);
      if (param_1[0x11] < param_1[0x10]) {
        param_1[0x11] = param_1[0x11] + 1;
        param_1[0x12] = param_1[0x12] + 1;
      }
    }
    param_1[0x13] = 0;
  }
  else {
    FUN_00473148((int)param_1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),cVar2 == '\0');
}

