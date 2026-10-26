/*
 * FUN_00521c8c at 00521c8c
 * undefined __register FUN_00521c8c(int * param_1, int * param_2, LONG * param_3, int param_4)
 * Address ranges: 00521c8c-00521d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521c8c(int *param_1,int *param_2,LONG *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  LONG *pLVar6;
  LONG *pLVar7;
  byte bVar8;
  LONG local_34;
  uint local_30;
  int local_28;
  LONG local_24;
  int local_20;
  uint local_18;
  int local_14;
  LONG *local_10;
  int *local_c;
  int *local_8;
  
  bVar8 = 0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*(char *)(param_4 + 0x25) == '\x02') {
    FUN_0041bb48((int *)param_2[3],param_1[0x87],param_3);
  }
  piVar2 = (int *)FUN_00520c1c((int)local_8);
  bVar1 = FUN_00525768(piVar2);
  if (bVar1) {
    uVar3 = local_10[3] - local_10[1];
    if (SBORROW4(local_10[3],local_10[1])) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_14 = (int)uVar3 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar3 & 1) != 0);
    }
    pLVar6 = local_10;
    pLVar7 = &local_24;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = *pLVar6;
      pLVar6 = pLVar6 + (uint)bVar8 * -2 + 1;
      pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
    }
    uVar3 = local_20 + local_14;
    if (SCARRY4(local_20,local_14)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    pLVar6 = local_10;
    pLVar7 = &local_34;
    local_18 = uVar3;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = *pLVar6;
      pLVar6 = pLVar6 + (uint)bVar8 * -2 + 1;
      pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
    }
    uVar3 = local_28 - local_14;
    if (SBORROW4(local_28,local_14)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar4 = uVar3 - 4;
    if (SBORROW4(uVar3,4)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    local_30 = uVar4;
    FUN_00522b0c(local_8,local_c,&local_24,*(char **)(param_4 + 0x28),*(int *)(param_4 + 0x10),'\0')
    ;
    FUN_00522b0c(local_8,local_c,&local_34,*(char **)(param_4 + 0x2c),*(int *)(param_4 + 0x10),'\0')
    ;
  }
  else {
    FUN_00522b0c(local_8,local_c,local_10,*(char **)(param_4 + 0x28),*(int *)(param_4 + 0x10),'\0');
  }
  return;
}

