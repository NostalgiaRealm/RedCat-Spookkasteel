/*
 * FUN_0043b914 at 0043b914
 * undefined __register FUN_0043b914(int param_1, undefined4 param_2, int param_3, LPPOINT param_4, char param_5)
 * Address ranges: 0043b914-0043ba8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 5 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 5 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043b914(int param_1,undefined4 param_2,int param_3,LPPOINT param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HWND hWndFrom;
  int iVar5;
  int *piVar6;
  uint uVar7;
  LPPOINT ptVar8;
  byte bVar9;
  HWND hWndTo;
  UINT cPoints;
  int local_20 [4];
  int local_10;
  int local_c;
  int local_8;
  
  bVar9 = 0;
  iVar2 = FUN_00437314(*(int *)(param_1 + 0x14));
  if (((param_3 == 0) || (*(char *)(param_3 + 0x8c) == '\0')) || (iVar2 < 2)) {
    uVar3 = FUN_004321bc(*(int **)(param_1 + 0x14));
    piVar6 = local_20;
    uVar4 = FUN_00432178(*(int **)(param_1 + 0x14));
    FUN_00411624(0,0,uVar4,piVar6,uVar3);
    piVar6 = local_20;
    ptVar8 = param_4;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar8->x = *piVar6;
      piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPPOINT)&ptVar8[-(uint)bVar9].y;
    }
    if (0 < iVar2) {
      if (param_5 == '\x01') {
        iVar2 = param_4[1].y >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((param_4[1].y & 1U) != 0);
        }
        param_4[1].y = iVar2;
      }
      else if (param_5 == '\x02') {
        iVar2 = param_4[1].y >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((param_4[1].y & 1U) != 0);
        }
        param_4->y = iVar2;
      }
      else if (param_5 == '\x03') {
        iVar2 = param_4[1].x >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((param_4[1].x & 1U) != 0);
        }
        param_4[1].x = iVar2;
      }
      else if (param_5 == '\x04') {
        iVar2 = param_4[1].x >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((param_4[1].x & 1U) != 0);
        }
        param_4->x = iVar2;
      }
    }
  }
  else {
    local_8 = *(int *)(param_3 + 0x30);
    local_c = *(int *)(param_3 + 0x34);
    uVar7 = *(uint *)(param_3 + 0x38);
    local_10 = *(int *)(param_3 + 0x3c);
    if ((byte)(param_5 - 3U) < 2) {
      uVar1 = uVar7 & 1;
      uVar7 = (int)uVar7 >> 1;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + (uVar1 != 0);
      }
    }
    else if ((byte)(param_5 - 1U) < 2) {
      local_10 = (int)*(uint *)(param_3 + 0x3c) >> 1;
      if (local_10 < 0) {
        local_10 = local_10 + (uint)((*(uint *)(param_3 + 0x3c) & 1) != 0);
      }
    }
    if (param_5 == '\x02') {
      local_c = local_c + local_10;
    }
    else if (param_5 == '\x04') {
      local_8 = local_8 + uVar7;
    }
    FUN_00411640(local_8,local_c,uVar7,local_20,local_10);
    piVar6 = local_20;
    ptVar8 = param_4;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar8->x = *piVar6;
      piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPPOINT)&ptVar8[-(uint)bVar9].y;
    }
  }
  cPoints = 2;
  hWndTo = (HWND)0x0;
  hWndFrom = (HWND)FUN_00438988(*(int **)(param_1 + 0x14));
  MapWindowPoints(hWndFrom,hWndTo,param_4,cPoints);
  return;
}

