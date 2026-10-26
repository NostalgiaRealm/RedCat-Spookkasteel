/*
 * FUN_0042aebc at 0042aebc
 * undefined __register FUN_0042aebc(int * param_1, UINT * param_2, HWND param_3, WNDPROC param_4)
 * Address ranges: 0042aebc-0042b172;0042b18c-0042b194
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 45 for TCustomComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 45 for
   TCustomComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_0042aebc(int *param_1,UINT *param_2,HWND param_3,WNDPROC param_4)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  HWND hWndTo;
  UINT UVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  tagPOINT *lpPoints;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  tagPOINT local_10;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_0042b173;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  UVar7 = *param_2;
  local_8 = param_1;
  if ((int)UVar7 < 0x105) {
    if (UVar7 != 0x104) {
      if ((int)UVar7 < 0x88) {
        if (UVar7 == 0x87) {
          puStack_20 = &stack0xfffffffc;
          bVar3 = FUN_0042a8e4(param_1);
          puVar1 = puStack_20;
          if (bVar3) {
            param_2[3] = 4;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar7 == 7) {
          puStack_20 = &stack0xfffffffc;
          piVar4 = FUN_0044879c(param_1);
          puVar1 = puStack_20;
          if ((piVar4 != (int *)0x0) &&
             (cVar2 = (**(code **)(*piVar4 + 0xd4))(piVar4,local_8), puVar1 = puStack_20,
             cVar2 == '\0')) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar7 == 8) {
          puVar1 = &stack0xfffffffc;
          if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else {
          puVar1 = &stack0xfffffffc;
          if ((UVar7 == 0x84) && (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 8) & 0x10) != 0))
          {
            param_2[3] = 0xffffffff;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        goto LAB_0042b134;
      }
      if (UVar7 != 0x100) {
        if (UVar7 != 0x101) {
          puVar1 = &stack0xfffffffc;
          if (UVar7 == 0x102) {
            puStack_20 = &stack0xfffffffc;
            uVar5 = FUN_004377cc(param_1,(int)param_2,param_3);
            if ((char)uVar5 != '\0') {
              *in_FS_OFFSET = uStack_28;
              return;
            }
            if ((((short)param_2[1] == 0xd) || (puVar1 = puStack_20, (short)param_2[1] == 0x1b)) &&
               (bVar3 = FUN_0042a8e4(local_8), puVar1 = puStack_20, bVar3)) {
              FUN_0042a908(local_8,0);
              *in_FS_OFFSET = uStack_28;
              return;
            }
          }
          goto LAB_0042b134;
        }
        goto LAB_0042b057;
      }
    }
    puVar1 = &stack0xfffffffc;
    if ((param_3 != (HWND)param_1[0x83]) &&
       (puStack_20 = &stack0xfffffffc, cVar2 = FUN_00437634(param_1,(int)param_2),
       puVar1 = puStack_20, cVar2 != '\0')) {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
  else {
    if (0xbd00 < (int)UVar7) {
      if (((UVar7 != 0xbd02) && (UVar7 != 0xbd04)) && (puVar1 = &stack0xfffffffc, UVar7 != 0xbd06))
      goto LAB_0042b134;
LAB_0042b120:
      (**(code **)(*param_1 + 0x6c))(param_1,param_2);
      *in_FS_OFFSET = uStack_28;
      return;
    }
    if (UVar7 == 0xbd00) goto LAB_0042b120;
    if (UVar7 != 0x105) {
      if (UVar7 == 0x200) {
        puStack_20 = &stack0xfffffffc;
        FUN_00451cfc(*(int *)PTR_DAT_005723fc,param_1,(int)param_2);
        puVar1 = puStack_20;
      }
      else {
        puVar1 = &stack0xfffffffc;
        if ((UVar7 == 0x205) &&
           (puStack_20 = &stack0xfffffffc, uVar6 = FUN_004287dc((int)param_1), puVar1 = puStack_20,
           (char)uVar6 != '\0')) {
          local_10.x = (LONG)(short)param_2[2];
          local_10.y = (LONG)*(short *)((int)param_2 + 10);
          UVar7 = 1;
          lpPoints = &local_10;
          hWndTo = (HWND)FUN_00438988(local_8);
          MapWindowPoints(param_3,hWndTo,lpPoints,UVar7);
          *(undefined2 *)(param_2 + 2) = (undefined2)local_10.x;
          *(undefined2 *)((int)param_2 + 10) = (undefined2)local_10.y;
          (**(code **)(*local_8 + 0x6c))(local_8,param_2);
          *in_FS_OFFSET = uStack_28;
          return;
        }
      }
      goto LAB_0042b134;
    }
LAB_0042b057:
    puStack_20 = &stack0xfffffffc;
    cVar2 = FUN_00437704(param_1,(int)param_2);
    puVar1 = puStack_20;
    if (cVar2 != '\0') {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
LAB_0042b134:
  puStack_20 = puVar1;
  UVar7 = CallWindowProcA(param_4,param_3,*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar7;
  if ((*param_2 == 0x203) && ((*(byte *)(local_8 + 0x10) & 0x80) != 0)) {
    FUN_00403270(local_8,extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = uStack_28;
  return;
}

