/*
 * FUN_005a7d30 at 005a7d30
 * undefined FUN_005a7d30(void)
 * Address ranges: 005a7d30-005a80bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_005a7d30(int param_1,HINSTANCE param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 uVar2;
  ATOM AVar3;
  HCURSOR pHVar4;
  HGDIOBJ pvVar5;
  undefined1 *puVar6;
  HICON pHVar7;
  code *pcVar8;
  HWND pHVar9;
  LPCSTR lpClassName;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  tagRECT *lpRect;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0xd7);
  *(HINSTANCE *)(param_1 + 0x28) = param_2;
  local_4 = 0;
  FUN_0040cc00(param_3,0,0xffffffff);
  *(undefined1 **)(param_1 + 0x30) = &LAB_005a8180;
  ((WNDCLASSA *)(param_1 + 0x2c))->style = 3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(HINSTANCE *)(param_1 + 0x3c) = param_2;
  pHVar4 = LoadCursorA(param_2,(LPCSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0x44) = pHVar4;
  pvVar5 = GetStockObject(4);
  *(HGDIOBJ *)(param_1 + 0x48) = pvVar5;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar6 = *(undefined1 **)(param_3 + 4);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0064a3b4;
  }
  *(undefined1 **)(param_1 + 0x50) = puVar6;
  pHVar7 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HICON *)(param_1 + 0x40) = pHVar7;
  AVar3 = RegisterClassA((WNDCLASSA *)(param_1 + 0x2c));
  if (AVar3 == 0) {
    local_2c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_RegisterClass___fails_006a8508;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10 - 1;
    cVar1 = FUN_00401940(uVar10,1);
    if (cVar1 != '\0') {
      pcVar12 = s_RegisterClass___fails_006a8508;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190(uVar10);
    }
    local_4._0_1_ = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0xed,local_2c);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    local_2c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10 - 1;
    cVar1 = FUN_00401940(uVar10,1);
    if (cVar1 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 2;
    pcVar8 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0xee,
                                  local_2c);
    (*pcVar8)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_005ae770();
    uVar2 = 0;
  }
  else {
    lpRect = &local_1c;
    pHVar9 = GetDesktopWindow();
    GetWindowRect(pHVar9,lpRect);
    lpClassName = *(LPCSTR *)(param_3 + 4);
    if (lpClassName == (LPCSTR)0x0) {
      lpClassName = "";
    }
    pHVar9 = CreateWindowExA(0,lpClassName,lpClassName,0,0,0,param_4,param_5,(HWND)0x0,(HMENU)0x0,
                             param_2,(LPVOID)0x0);
    *(HWND *)(param_1 + 0x54) = pHVar9;
    if (pHVar9 == (HWND)0x0) {
      local_2c[0] = (undefined1)param_3;
      uVar10 = 0xffffffff;
      local_28 = (char *)0x0;
      pcVar12 = s_CreateWindowEx___fails_006a84f0;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(s_CreateWindowEx___fails_006a84f0,~uVar10 - 1);
      local_4._0_1_ = 3;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x105,local_2c);
      local_4._0_1_ = 0;
      if (local_28 != (char *)0x0) {
        cVar1 = *(char *)((int)local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)local_28 + -1));
        }
        else {
          *(char *)((int)local_28 + -1) = cVar1 + -1;
        }
      }
      local_3c[0] = (undefined1)param_3;
      uVar10 = 0xffffffff;
      local_38 = 0;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      local_34 = 0;
      local_30 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_4 = CONCAT31(local_4._1_3_,4);
      pcVar8 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Davi_006a84a8,
                                    0x106,local_3c);
      (*pcVar8)();
      if (local_38 != 0) {
        cVar1 = *(char *)(local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_38 + -1));
        }
        else {
          *(char *)(local_38 + -1) = cVar1 + -1;
        }
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      DestroyWindow(*(HWND *)(param_1 + 0x54));
      local_4 = 0xffffffff;
      FUN_005ae770();
      uVar2 = 0;
    }
    else {
      FUN_005a6340();
      uVar2 = FUN_005a7b30(param_4,param_5,param_6);
      local_4 = 0xffffffff;
      FUN_005ae770();
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

