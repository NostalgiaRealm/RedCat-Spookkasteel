/*
 * FUN_00488d54 at 00488d54
 * undefined __register FUN_00488d54(int * param_1, int * param_2, int * param_3)
 * Address ranges: 00488d54-00488def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 136 for TQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 136 for TQuery.
   Original bytes unchanged; names and types still inferred. */

void FUN_00488d54(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*param_2 + 8))();
  (**(code **)(*param_3 + 8))();
  iVar2 = (**(code **)(*param_1 + 0x128))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x128))();
    if (*(int *)(iVar2 + 0x24) != 0) {
      iVar2 = FUN_0041300c(param_1[0x90]);
      if (-1 < iVar2 + -1) {
        iVar5 = 0;
        do {
          iVar3 = (**(code **)(*param_1 + 0x128))();
          iVar3 = *(int *)(iVar3 + 0x24);
          iVar4 = FUN_0046f0d0(param_1[0x90],iVar5);
          bVar1 = FUN_00488d30(*(undefined **)(iVar4 + 0x2c),iVar3,param_2);
          if (bVar1) {
            iVar3 = FUN_0046f0d0(param_1[0x90],iVar5);
            FUN_00488d30(*(undefined **)(iVar3 + 0x2c),(int)param_1,param_3);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

