/*
 * FUN_00455d70 at 00455d70
 * undefined __register FUN_00455d70(int param_1)
 * Address ranges: 00455d70-00455dea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455d70(int param_1)

{
  HWND hWnd;
  HDC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  HGDIOBJ pvVar4;
  undefined4 extraout_ECX;
  HRGN hrgnClip;
  DWORD flags;
  
  flags = 0x412;
  hrgnClip = (HRGN)0x0;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0x24));
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  *(HDC *)(param_1 + 0x140) = pHVar1;
  if (*(char *)(param_1 + 0x168) == '\x03') {
    if (*(int *)(param_1 + 0x130) == 0) {
      piVar2 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX);
      *(int **)(param_1 + 0x130) = piVar2;
      uVar3 = FUN_004230a8(0,0xffffff);
      FUN_0041c2ec(piVar2,uVar3);
    }
    pvVar4 = (HGDIOBJ)FUN_0041c34c(*(int *)(param_1 + 0x130));
    pvVar4 = SelectObject(*(HDC *)(param_1 + 0x140),pvVar4);
    *(HGDIOBJ *)(param_1 + 0x164) = pvVar4;
  }
  return;
}

