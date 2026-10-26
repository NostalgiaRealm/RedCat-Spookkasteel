/*
 * FUN_0055402c at 0055402c
 * undefined __register FUN_0055402c(int * param_1, char param_2)
 * Address ranges: 0055402c-0055410a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x553ae4 slot 47 for TCustomGDIRadioButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x553ae4 slot 47 for
   TCustomGDIRadioButton. Original bytes unchanged; names and types still inferred. */

void FUN_0055402c(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_18;
  int local_10;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 != param_2) {
    FUN_004a914c((int)param_1,param_2);
    if ((param_2 != '\0') && (param_1[9] != 0)) {
      iVar2 = FUN_0043579c(param_1[9]);
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_18 = uVar3 + 1;
        local_10 = 0;
        do {
          iVar2 = FUN_00435760(param_1[9],local_10);
          uVar4 = FUN_0040320c(*(int **)(iVar2 + 4),(int)&PTR_FUN_00553c50);
          if ((char)uVar4 != '\0') {
            iVar2 = FUN_00435760(param_1[9],local_10);
            if (*(int **)(iVar2 + 4) != param_1) {
              iVar2 = FUN_00435760(param_1[9],local_10);
              piVar5 = (int *)FUN_00403224(*(int **)(iVar2 + 4),(int)&PTR_FUN_00553c50);
              (**(code **)(*piVar5 + 0xbc))(piVar5,0);
            }
          }
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    FUN_005539cc(param_1,param_2);
  }
  return;
}

