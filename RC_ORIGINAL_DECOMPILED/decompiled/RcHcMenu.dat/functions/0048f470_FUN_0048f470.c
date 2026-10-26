/*
 * FUN_0048f470 at 0048f470
 * char __register FUN_0048f470(int * param_1, int * param_2)
 * Address ranges: 0048f470-0048f53f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 5 for TAppInfoPropRefList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e3ec slot 5 for
   TAppInfoPropRefList. Original bytes unchanged; names and types still inferred. */

char FUN_0048f470(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_18;
  int local_14;
  
  iVar3 = FUN_00402fdc(param_2);
  iVar4 = FUN_00402fdc(param_1);
  if ((iVar3 == iVar4) && (cVar1 = FUN_0048efa4(param_1,param_2), cVar1 != '\0')) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 != '\0') {
    iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_0048e3ec);
    iVar3 = FUN_0045ba40(*(int *)(iVar3 + 0x20));
    uVar5 = iVar3 - 1;
    if (SBORROW4(iVar3,1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if (-1 < (int)uVar5) {
      local_18 = uVar5 + 1;
      local_14 = 0;
      do {
        iVar3 = FUN_00403224(param_2,(int)&PTR_FUN_0048e3ec);
        piVar6 = (int *)(**(code **)**(undefined4 **)(iVar3 + 0x20))
                                  (*(undefined4 **)(iVar3 + 0x20),local_14);
        uVar7 = FUN_00403224(piVar6,(int)&PTR_FUN_0048e384);
        piVar6 = (int *)(*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8],local_14);
        piVar6 = (int *)FUN_00403224(piVar6,(int)&PTR_FUN_0048e384);
        cVar2 = (**(code **)(*piVar6 + 4))(piVar6,uVar7);
        if (cVar2 == '\0') {
          return '\0';
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return cVar1;
}

