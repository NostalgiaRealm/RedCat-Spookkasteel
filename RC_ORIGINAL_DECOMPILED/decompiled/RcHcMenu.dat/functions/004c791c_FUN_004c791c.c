/*
 * FUN_004c791c at 004c791c
 * undefined __register FUN_004c791c(int param_1, int * param_2, int * param_3, LPRECT param_4, uint * param_5, char param_6, uint param_7, uint param_8, byte param_9, undefined * param_10, int * param_11)
 * Address ranges: 004c791c-004c7de8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c791c(int param_1,int *param_2,int *param_3,LPRECT param_4,uint *param_5,char param_6,
                 uint param_7,uint param_8,byte param_9,undefined *param_10,int *param_11)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR lpchText;
  HDC hdc;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *piVar6;
  int iVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int iVar8;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  LONG *pLVar9;
  LPRECT ptVar10;
  byte bVar11;
  UINT format;
  LONG local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  bVar11 = 0;
  iVar7 = param_3[3] - param_3[1];
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_3[3],param_3[1])) {
    thunk_FUN_00402874((uint)param_3);
    iVar7 = extraout_EDX;
  }
  uVar2 = local_10[2] - *local_10;
  if (SBORROW4(local_10[2],*local_10)) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar7 = extraout_EDX_00;
  }
  FUN_0041160c(uVar2,iVar7,&local_20);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_0041160c(0,0,&local_28);
  }
  else {
    uVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
    iVar7 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
    FUN_0041160c(iVar7 / (int)(uint)*(byte *)(local_8 + 0x20),uVar3,&local_28);
  }
  if ((param_6 == '\0') || (iVar7 = FUN_00404030((int)param_10), iVar7 < 1)) {
    FUN_00411624(0,0,0,local_48,0);
    pLVar9 = local_48;
    ptVar10 = param_4;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar10->left = *pLVar9;
      pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
      ptVar10 = (LPRECT)((int)ptVar10 + (uint)bVar11 * -8 + 4);
    }
    FUN_0041160c(0,0,&local_30);
  }
  else {
    uVar3 = 0;
    pLVar9 = local_48;
    iVar7 = local_10[2] - *local_10;
    if (SBORROW4(local_10[2],*local_10)) {
      thunk_FUN_00402874((uint)local_10);
      iVar7 = extraout_ECX;
    }
    FUN_00411624(0,0,iVar7,pLVar9,uVar3);
    pLVar9 = local_48;
    ptVar10 = param_4;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar10->left = *pLVar9;
      pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
      ptVar10 = (LPRECT)((int)ptVar10 + (uint)bVar11 * -8 + 4);
    }
    format = 0x400;
    ptVar10 = param_4;
    iVar7 = FUN_00404030((int)param_10);
    lpchText = FUN_004041f4(param_10);
    hdc = (HDC)FUN_0041cf6c(local_c);
    DrawTextA(hdc,lpchText,iVar7,ptVar10,format);
    iVar7 = param_4->bottom - param_4->top;
    if (SBORROW4(param_4->bottom,param_4->top)) {
      thunk_FUN_00402874((uint)param_4);
      iVar7 = extraout_EDX_01;
    }
    uVar2 = param_4->right - param_4->left;
    if (SBORROW4(param_4->right,param_4->left)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar7 = extraout_EDX_02;
    }
    FUN_0041160c(uVar2,iVar7,&local_30);
  }
  if (param_9 < 2) {
    uVar2 = local_1c - local_24;
    if (SBORROW4(local_1c,local_24)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    uVar2 = (int)uVar4 >> 1;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + ((uVar4 & 1) != 0);
    }
    param_5[1] = uVar2;
    uVar2 = local_1c - local_2c;
    if (SBORROW4(local_1c,local_2c)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    uVar2 = (int)uVar4 >> 1;
    local_14 = uVar2;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + ((uVar4 & 1) != 0);
      local_14 = uVar2;
    }
  }
  else {
    uVar2 = local_20 - local_28;
    if (SBORROW4(local_20,local_28)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    uVar2 = (int)uVar4 >> 1;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + ((uVar4 & 1) != 0);
    }
    *param_5 = uVar2;
    uVar2 = local_20 - local_30;
    if (SBORROW4(local_20,local_30)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    uVar2 = (int)uVar4 >> 1;
    local_18 = uVar2;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + ((uVar4 & 1) != 0);
      local_18 = uVar2;
    }
  }
  if ((local_30 == 0) || (local_28 == 0)) {
    uVar2 = 0;
    param_7 = 0;
  }
  if (param_8 == 0xffffffff) {
    if (param_7 == 0xffffffff) {
      piVar6 = &local_38;
      iVar7 = local_24 + local_2c;
      if (SCARRY4(local_24,local_2c)) {
        thunk_FUN_00402874(uVar2);
        piVar6 = extraout_ECX_00;
        iVar7 = extraout_EDX_03;
      }
      uVar2 = local_28 + local_30;
      if (SCARRY4(local_28,local_30)) {
        uVar2 = thunk_FUN_00402874(uVar2);
        piVar6 = extraout_ECX_01;
        iVar7 = extraout_EDX_04;
      }
      FUN_0041160c(uVar2,iVar7,piVar6);
      if (param_9 < 2) {
        uVar2 = local_20 - local_38;
        if (SBORROW4(local_20,local_38)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
      }
      else {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
      }
      param_8 = (int)uVar2 / 3;
      param_7 = param_8;
    }
    else {
      piVar6 = &local_38;
      iVar7 = local_24 + param_7;
      if (SCARRY4(local_24,param_7)) {
        uVar2 = thunk_FUN_00402874(uVar2);
        piVar6 = extraout_ECX_02;
        iVar7 = extraout_EDX_05;
      }
      iVar8 = iVar7 + local_2c;
      if (SCARRY4(iVar7,local_2c)) {
        thunk_FUN_00402874(uVar2);
        piVar6 = extraout_ECX_03;
        iVar8 = extraout_EDX_06;
      }
      uVar2 = local_28 + param_7;
      if (SCARRY4(local_28,param_7)) {
        uVar2 = thunk_FUN_00402874(uVar2);
        piVar6 = extraout_ECX_04;
        iVar8 = extraout_EDX_07;
      }
      uVar4 = uVar2 + local_30;
      if (SCARRY4(uVar2,local_30)) {
        uVar4 = thunk_FUN_00402874(uVar4);
        piVar6 = extraout_ECX_05;
        iVar8 = extraout_EDX_08;
      }
      FUN_0041160c(uVar4,iVar8,piVar6);
      if (param_9 < 2) {
        uVar2 = local_20 - local_38;
        if (SBORROW4(local_20,local_38)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        uVar4 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        param_8 = (int)uVar4 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar4 & 1) != 0);
        }
      }
      else {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        uVar4 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        param_8 = (int)uVar4 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar4 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 == 0xffffffff) {
    uVar2 = param_8 + local_24;
    if (SCARRY4(param_8,local_24)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    iVar7 = local_1c - uVar2;
    if (SBORROW4(local_1c,uVar2)) {
      thunk_FUN_00402874(uVar2);
      iVar7 = extraout_EDX_09;
    }
    uVar2 = param_8 + local_28;
    if (SCARRY4(param_8,local_28)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar7 = extraout_EDX_10;
    }
    uVar4 = local_20 - uVar2;
    if (SBORROW4(local_20,uVar2)) {
      uVar4 = thunk_FUN_00402874(uVar4);
      iVar7 = extraout_EDX_11;
    }
    FUN_0041160c(uVar4,iVar7,&local_38);
    if (param_9 < 2) {
      uVar2 = local_38 - local_30;
      if (SBORROW4(local_38,local_30)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
    else {
      uVar2 = local_34 - local_2c;
      if (SBORROW4(local_34,local_2c)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_5 = param_8;
    uVar2 = *param_5 + local_28;
    if (SCARRY4(*param_5,local_28)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 + param_7;
    uVar5 = local_14;
    if (SCARRY4(uVar2,param_7)) {
      uVar4 = thunk_FUN_00402874(uVar2 + param_7);
      uVar5 = local_14;
    }
  }
  else if (param_9 == 1) {
    uVar2 = local_20 - param_8;
    if (SBORROW4(local_20,param_8)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 - local_28;
    if (SBORROW4(uVar2,local_28)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    *param_5 = uVar4;
    uVar2 = *param_5 - param_7;
    if (SBORROW4(*param_5,param_7)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = uVar2 - local_30;
    uVar5 = local_14;
    if (SBORROW4(uVar2,local_30)) {
      uVar4 = thunk_FUN_00402874(uVar2 - local_30);
      uVar5 = local_14;
    }
  }
  else if (param_9 == 2) {
    param_5[1] = param_8;
    uVar2 = param_5[1] + local_24;
    if (SCARRY4(param_5[1],local_24)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = local_18;
    uVar5 = uVar2 + param_7;
    if (SCARRY4(uVar2,param_7)) {
      uVar5 = thunk_FUN_00402874(uVar2 + param_7);
      uVar4 = local_18;
    }
  }
  else {
    uVar4 = local_18;
    uVar5 = local_14;
    if (param_9 == 3) {
      uVar2 = local_1c - param_8;
      if (SBORROW4(local_1c,param_8)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar4 = uVar2 - local_24;
      if (SBORROW4(uVar2,local_24)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      param_5[1] = uVar4;
      uVar2 = param_5[1] - param_7;
      if (SBORROW4(param_5[1],param_7)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar4 = local_18;
      uVar5 = uVar2 - local_2c;
      if (SBORROW4(uVar2,local_2c)) {
        uVar5 = thunk_FUN_00402874(uVar2 - local_2c);
        uVar4 = local_18;
      }
    }
  }
  local_14 = uVar5;
  local_18 = uVar4;
  uVar2 = *local_10 + *param_11;
  if (SCARRY4(*local_10,*param_11)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar4 = *param_5;
  *param_5 = *param_5 + uVar2;
  if (SCARRY4(uVar4,uVar2)) {
    thunk_FUN_00402874(uVar2);
  }
  uVar2 = local_10[1] + param_11[1];
  if (SCARRY4(local_10[1],param_11[1])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  puVar1 = param_5 + 1;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar2;
  if (SCARRY4(uVar4,uVar2)) {
    thunk_FUN_00402874(uVar2);
  }
  uVar2 = local_10[1] + local_14;
  if (SCARRY4(local_10[1],local_14)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar4 = uVar2 + *param_11;
  if (SCARRY4(uVar2,*param_11)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  uVar2 = *local_10 + local_18;
  if (SCARRY4(*local_10,local_18)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar5 = uVar2 + *param_11;
  if (SCARRY4(uVar2,*param_11)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  OffsetRect(param_4,uVar5,uVar4);
  return;
}

