/*
 * FUN_004cafbc at 004cafbc
 * undefined __register FUN_004cafbc(int param_1, int * param_2, int * param_3, uint param_4, LPRECT param_5, int * param_6, int param_7, int param_8, byte param_9, undefined * param_10, int * param_11)
 * Address ranges: 004cafbc-004cb2c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cafbc(int param_1,int *param_2,int *param_3,uint param_4,LPRECT param_5,int *param_6,
                 int param_7,int param_8,byte param_9,undefined *param_10,int *param_11)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpchText;
  HDC hdc;
  LONG *pLVar4;
  LPRECT ptVar5;
  byte bVar6;
  LONG local_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  bVar6 = 0;
  if ((param_4 & 2) == 2) {
    if (param_9 == 0) {
      param_9 = 1;
    }
    else if (param_9 == 1) {
      param_9 = 0;
    }
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_0041160c(param_3[2] - *param_3,param_3[3] - param_3[1],&local_1c);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_0041160c(0,0,&local_24);
  }
  else {
    uVar1 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
    iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
    FUN_0041160c(iVar2 / (int)(uint)*(byte *)(local_8 + 0x20),uVar1,&local_24);
  }
  iVar2 = FUN_00404030((int)param_10);
  if (iVar2 < 1) {
    FUN_00411624(0,0,0,local_44,0);
    pLVar4 = local_44;
    ptVar5 = param_5;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar5->left = *pLVar4;
      pLVar4 = pLVar4 + (uint)bVar6 * -2 + 1;
      ptVar5 = (LPRECT)((int)ptVar5 + (uint)bVar6 * -8 + 4);
    }
    FUN_0041160c(0,0,&local_2c);
  }
  else {
    FUN_00411624(0,0,param_3[2] - *param_3,local_44,0);
    pLVar4 = local_44;
    ptVar5 = param_5;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar5->left = *pLVar4;
      pLVar4 = pLVar4 + (uint)bVar6 * -2 + 1;
      ptVar5 = (LPRECT)((int)ptVar5 + (uint)bVar6 * -8 + 4);
    }
    uVar3 = param_4 | 0x400;
    ptVar5 = param_5;
    iVar2 = FUN_00404030((int)param_10);
    lpchText = FUN_004041f4(param_10);
    hdc = (HDC)FUN_0041cf6c(local_c);
    DrawTextA(hdc,lpchText,iVar2,ptVar5,uVar3);
    FUN_0041160c(param_5->right - param_5->left,param_5->bottom - param_5->top,&local_2c);
  }
  if (param_9 < 2) {
    uVar3 = (local_18 - local_20) + 1;
    iVar2 = (int)uVar3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
    }
    param_6[1] = iVar2;
    uVar3 = (local_18 - local_28) + 1;
    local_10 = (int)uVar3 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar3 & 1) != 0);
    }
  }
  else {
    uVar3 = (local_1c - local_24) + 1;
    iVar2 = (int)uVar3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
    }
    *param_6 = iVar2;
    uVar3 = (local_1c - local_2c) + 1;
    local_14 = (int)uVar3 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar3 & 1) != 0);
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    param_7 = 0;
  }
  if (param_8 == -1) {
    if (param_7 == -1) {
      FUN_0041160c(local_24 + local_2c,local_20 + local_28,&local_34);
      if (param_9 < 2) {
        local_34 = local_1c - local_34;
      }
      else {
        local_34 = local_18 - local_30;
      }
      param_8 = local_34 / 3;
      param_7 = param_8;
    }
    else {
      FUN_0041160c(local_24 + param_7 + local_2c,local_20 + param_7 + local_28,&local_34);
      if (param_9 < 2) {
        uVar3 = (local_1c - local_34) + 1;
        param_8 = (int)uVar3 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar3 & 1) != 0);
        }
      }
      else {
        uVar3 = (local_18 - local_30) + 1;
        param_8 = (int)uVar3 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar3 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 == -1) {
    FUN_0041160c(local_1c - (param_8 + local_24),local_18 - (param_8 + local_20),&local_34);
    if (param_9 < 2) {
      param_7 = local_34 - local_2c >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_34 - local_2c & 1U) != 0);
      }
    }
    else {
      param_7 = local_30 - local_28 >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_30 - local_28 & 1U) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_6 = param_8;
    local_14 = param_8 + local_24 + param_7;
  }
  else if (param_9 == 1) {
    local_24 = (local_1c - param_8) - local_24;
    *param_6 = local_24;
    local_14 = (local_24 - param_7) - local_2c;
  }
  else if (param_9 == 2) {
    param_6[1] = param_8;
    local_10 = param_8 + local_20 + param_7;
  }
  else if (param_9 == 3) {
    local_20 = (local_18 - param_8) - local_20;
    param_6[1] = local_20;
    local_10 = (local_20 - param_7) - local_28;
  }
  *param_6 = *param_6 + *param_3 + *param_11;
  param_6[1] = param_6[1] + param_3[1] + param_11[1];
  OffsetRect(param_5,*param_3 + local_14 + *param_11,param_3[1] + local_10 + *param_11);
  return;
}

