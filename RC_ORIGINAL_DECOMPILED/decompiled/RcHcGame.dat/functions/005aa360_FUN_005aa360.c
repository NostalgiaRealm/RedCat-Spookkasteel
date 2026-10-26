/*
 * FUN_005aa360 at 005aa360
 * undefined FUN_005aa360(void)
 * Address ranges: 005aa360-005aa44f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005aa360(int param_1)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  tagRECT *lpRect;
  tagRECT local_2c;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a18;
  local_c = ExceptionList;
  lpRect = &local_2c;
  ExceptionList = &local_c;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  FUN_005aa270((local_2c.right + local_2c.left) / 2,(local_2c.top + local_2c.bottom) / 2);
  iVar2 = FUN_005178b0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar5 = FUN_005ae390(local_1c,s_CDaviMainWindow__SetMouseCenterT_006a8a90,
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    local_4 = 0;
    FUN_005aff00(uVar5);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

