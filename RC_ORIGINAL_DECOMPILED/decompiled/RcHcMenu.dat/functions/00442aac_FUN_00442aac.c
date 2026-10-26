/*
 * FUN_00442aac at 00442aac
 * undefined __register FUN_00442aac(int * param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, ushort param_5)
 * Address ranges: 00442aac-00442bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 12 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 12 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_00442aac(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 ushort param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24 [8];
  
  puVar4 = local_24;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = thunk_FUN_0044355c((int)param_1);
  iVar1 = FUN_00442bc4((int)param_1);
  if (((iVar3 == 0) || ((*(char *)(iVar3 + 0x34) == '\0' && (iVar1 == 0)))) ||
     ((*(short *)((int)param_1 + 0x92) == 0 && (*(short *)((int)param_1 + 0x8a) == 0)))) {
    if ((iVar3 == 0) || (uVar2 = FUN_00444a50(iVar3), (char)uVar2 != '\0')) {
      FUN_00442204();
    }
    else {
      FUN_00441984();
    }
  }
  else {
    (**(code **)(*param_1 + 0x34))(param_1,param_2,local_24,(param_5 & 1) != 0);
    if (*(short *)((int)param_1 + 0x92) != 0) {
      (*(code *)param_1[0x24])
                (param_1[0x25],param_1,param_2,CONCAT22((short)((uint)local_24 >> 0x10),param_5),
                 local_24);
    }
  }
  return;
}

