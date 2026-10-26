/*
 * FUN_0053146c at 0053146c
 * undefined __register FUN_0053146c(int * param_1)
 * Address ranges: 0053146c-00531700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053146c(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int local_14;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_0045ba40(param_1[0x82]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      piVar4 = (int *)(*(code *)**(undefined4 **)param_1[0x82])((undefined4 *)param_1[0x82],local_c)
      ;
      piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004fdb04);
      FUN_00431d2c(piVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX);
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  uVar5 = FUN_005317b0((int)param_1);
  if ((char)uVar5 == '\0') {
    uVar5 = FUN_0040320c((int *)param_1[9],(int)&PTR_FUN_0052ec34);
    if ((char)uVar5 == '\0') {
      iVar2 = FUN_00403224((int *)param_1[9],(int)&PTR_FUN_00531d10);
      if (*(int *)(iVar2 + 0x294) == 0) {
        local_10 = 0;
      }
      else {
        iVar2 = FUN_00403224((int *)param_1[9],(int)&PTR_FUN_00531d10);
        iVar2 = FUN_00549b48(*(int *)(iVar2 + 0x294));
        local_10 = FUN_0048ec24(*(int *)(iVar2 + 0x10));
      }
    }
    else {
      piVar4 = (int *)FUN_00403224((int *)param_1[9],(int)&PTR_FUN_0052ec34);
      iVar2 = FUN_0052f8a8(piVar4);
      local_10 = FUN_0048ec24(*(int *)(iVar2 + 0x10));
    }
  }
  else {
    iVar2 = FUN_005286e0((int *)param_1[0x84]);
    local_10 = FUN_0051e5f0(iVar2);
  }
  iVar2 = FUN_0045ba40(param_1[0x82]);
  if (iVar2 < (int)local_10) {
    while (uVar3 = FUN_0045ba40(param_1[0x82]), uVar3 != local_10) {
      FUN_00530cc4(param_1);
    }
  }
  else {
    iVar2 = FUN_0045ba40(param_1[0x82]);
    if ((int)local_10 < iVar2) {
      while (uVar3 = FUN_0045ba40(param_1[0x82]), uVar3 != local_10) {
        FUN_00531270((int)param_1);
      }
    }
  }
  iVar2 = FUN_0045ba40(param_1[0x82]);
  if (0 < iVar2) {
    cVar1 = FUN_0053131c();
    if ((cVar1 == '\0') || (uVar5 = FUN_005317b0((int)param_1), (char)uVar5 == '\0')) {
      iVar2 = FUN_0045ba40(param_1[0x82]);
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_14 = uVar3 + 1;
        local_c = 0;
        do {
          piVar4 = (int *)(*(code *)**(undefined4 **)param_1[0x82])
                                    ((undefined4 *)param_1[0x82],local_c);
          piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004fdb04);
          iVar2 = FUN_0045ba40(param_1[0x82]);
          FUN_00431f78(piVar4,*(int *)(param_1[9] + 0x38) / iVar2);
          local_c = local_c + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else {
      iVar2 = FUN_0045ba40(param_1[0x82]);
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_14 = uVar3 + 1;
        local_c = 0;
        do {
          piVar4 = (int *)(*(code *)**(undefined4 **)param_1[0x82])
                                    ((undefined4 *)param_1[0x82],local_c);
          piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004fdb04);
          piVar6 = (int *)FUN_005286e0((int *)param_1[0x84]);
          iVar2 = FUN_0051e404(piVar6,local_c);
          FUN_00431f78(piVar4,*(undefined4 *)(iVar2 + 0x34));
          local_c = local_c + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    piVar4 = (int *)FUN_0045bac8(param_1[0x82]);
    piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004fdb04);
    FUN_00431d2c(piVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),5),extraout_ECX_00);
  }
  return;
}

