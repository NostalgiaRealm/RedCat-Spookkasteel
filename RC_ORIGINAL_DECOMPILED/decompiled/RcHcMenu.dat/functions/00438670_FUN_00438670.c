/*
 * FUN_00438670 at 00438670
 * undefined __register FUN_00438670(int param_1, int param_2)
 * Address ranges: 00438670-00438746
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438670(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND hWndInsertAfter;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x134) != 0) {
      param_2 = param_2 - *(int *)(*(int *)(iVar3 + 0x134) + 8);
    }
    iVar3 = FUN_004123e0(*(int *)(iVar3 + 0x180),param_1);
    if (-1 < iVar3) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x24) + 0x180);
      iVar1 = piVar4[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar3 != param_2) {
        FUN_00412224(piVar4,iVar3);
        FUN_00412400(*(int **)(*(int *)(param_1 + 0x24) + 0x180),param_2,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      if (param_2 == 0) {
        hWndInsertAfter = (HWND)0x1;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x180);
        if (param_2 == puVar2[2] + -1) {
          hWndInsertAfter = (HWND)0x0;
        }
        else if (iVar3 < param_2) {
          piVar4 = (int *)FUN_00412384(puVar2,param_2 + 1);
          hWndInsertAfter = (HWND)FUN_00438988(piVar4);
        }
        else {
          if (iVar3 <= param_2) {
            return;
          }
          piVar4 = (int *)FUN_00412384(puVar2,param_2);
          hWndInsertAfter = (HWND)FUN_00438988(piVar4);
        }
      }
      SetWindowPos(*(HWND *)(param_1 + 0x14c),hWndInsertAfter,0,0,0,0,3);
    }
  }
  return;
}

