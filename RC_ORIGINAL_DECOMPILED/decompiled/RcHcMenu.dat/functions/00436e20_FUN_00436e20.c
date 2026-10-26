/*
 * FUN_00436e20 at 00436e20
 * undefined __register FUN_00436e20(int * param_1, int param_2)
 * Address ranges: 00436e20-00436f1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436e20(int *param_1,int param_2)

{
  int iVar1;
  HCURSOR hCursor;
  HWND pHVar2;
  HWND pHVar3;
  short sVar4;
  char cVar5;
  tagPOINT local_1c;
  int local_14 [2];
  
  if (*(int *)(param_2 + 4) == param_1[0x53]) {
    if (*(short *)(param_2 + 8) == -2) {
      if ((*(short *)(param_2 + 10) == 0x201) && (*(int *)(*(int *)PTR_DAT_005723fc + 0x24) != 0)) {
        pHVar2 = GetLastActivePopup(*(HWND *)(*(int *)PTR_DAT_005723fc + 0x24));
        pHVar3 = GetForegroundWindow();
        if (pHVar2 != pHVar3) {
          FUN_00450e74(*(int *)PTR_DAT_005723fc);
          return;
        }
      }
    }
    else if (*(short *)(param_2 + 8) == 1) {
      sVar4 = *(short *)(*(int *)PTR_DAT_005725f0 + 0x38);
      if (sVar4 == 0) {
        GetCursorPos(&local_1c);
        cVar5 = '\0';
        FUN_004322b8(param_1,&local_1c.x,local_14);
        iVar1 = FUN_004360a4((int)param_1,local_14,0,cVar5);
        if (iVar1 != 0) {
          if ((*(byte *)(iVar1 + 0x20) & 0x10) == 0) {
            sVar4 = *(short *)(iVar1 + 0x68);
          }
          else {
            sVar4 = -2;
          }
        }
        if (sVar4 == 0) {
          if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
            sVar4 = (short)param_1[0x1a];
          }
          else {
            sVar4 = -2;
          }
        }
      }
      if (sVar4 != 0) {
        hCursor = (HCURSOR)FUN_0044f5b8(*(int *)PTR_DAT_005725f0,(int)sVar4);
        SetCursor(hCursor);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}

