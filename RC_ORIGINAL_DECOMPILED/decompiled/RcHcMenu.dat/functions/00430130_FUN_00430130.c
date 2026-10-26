/*
 * FUN_00430130 at 00430130
 * undefined __register FUN_00430130(int param_1, int * param_2)
 * Address ranges: 00430130-00430191
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42dc04 slot 3 for TDragDockObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42dc04 slot 3 for
   TDragDockObject. Original bytes unchanged; names and types still inferred. */

void FUN_00430130(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  
  bVar5 = 0;
  FUN_0042ffb4(param_1,param_2);
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042dc04);
  if ((char)uVar1 != '\0') {
    *(char *)(param_1 + 0x54) = (char)param_2[0x15];
    *(int *)(param_1 + 0x58) = param_2[0x16];
    *(char *)(param_1 + 0x6c) = (char)param_2[0x1b];
    piVar3 = param_2 + 0x11;
    piVar4 = (int *)(param_1 + 0x44);
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    piVar3 = param_2 + 0x17;
    piVar4 = (int *)(param_1 + 0x5c);
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40),param_2[0x10]);
  }
  return;
}

