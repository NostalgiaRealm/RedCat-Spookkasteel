/*
 * FUN_0048461c at 0048461c
 * undefined4 __register FUN_0048461c(int * param_1, int param_2, char param_3, char param_4)
 * Address ranges: 0048461c-00484726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 110 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 110 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0048461c(int *param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  int *piVar2;
  short sVar3;
  undefined3 uVar5;
  undefined4 uVar4;
  
  if (param_3 == '\0') {
    uVar1 = thunk_FUN_00479c8e(param_1[0x5a]);
  }
  else if (param_3 == '\x01') {
    uVar1 = thunk_FUN_00479c9a(param_1[0x5a]);
  }
  else if (param_3 == '\x02') {
    uVar1 = thunk_FUN_00479c94(param_1[0x5a]);
  }
  else {
    uVar1 = 0;
  }
  sVar3 = (short)uVar1;
  if (sVar3 == 0) {
    piVar2 = (int *)((uint)*(ushort *)(param_1 + 0x7b) + param_2);
    *(char *)(piVar2 + 1) = (char)param_1[0x5e];
    *(undefined1 *)((int)piVar2 + 5) = 0;
    if ((char)param_1[0x77] == '\0') {
      *piVar2 = param_1[0x5d];
    }
    else if ((char)param_1[0x77] == '\x01') {
      *piVar2 = param_1[0x5c];
    }
    else {
      *piVar2 = -1;
    }
    FUN_0048458c((int)param_1,param_2);
    (**(code **)(*param_1 + 0x120))(param_1,param_2);
    uVar1 = thunk_FUN_004799ff(param_1[0x5a]);
    FUN_0047fe48(uVar1);
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined3)((uint)param_1 >> 8);
    if (sVar3 == 0x2201) {
      uVar4 = CONCAT31(uVar5,1);
    }
    else if (sVar3 == 0x2202) {
      uVar4 = CONCAT31(uVar5,2);
    }
    else {
      uVar4 = CONCAT31(uVar5,3);
      if (param_4 != '\0') {
        FUN_0047fe48(uVar1);
      }
    }
  }
  return uVar4;
}

