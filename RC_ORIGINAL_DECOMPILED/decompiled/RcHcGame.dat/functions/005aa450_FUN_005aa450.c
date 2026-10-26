/*
 * FUN_005aa450 at 005aa450
 * undefined FUN_005aa450(void)
 * Address ranges: 005aa450-005aa68d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005aa450(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  tagPOINT local_54;
  RECT local_4c;
  tagRECT local_3c;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645a40;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x76) != '\0') && (param_2 != *(char *)(param_1 + 0x75))) {
    ExceptionList = &local_c;
    *(char *)(param_1 + 0x75) = param_2;
    if (param_2 == '\0') {
      ClipCursor((RECT *)0x0);
    }
    else {
      if (*(char *)(param_1 + 0x88) == '\0') {
        local_4c.left = *(LONG *)(param_1 + 0x78);
        local_4c.top = *(LONG *)(param_1 + 0x7c);
        local_4c.right = *(LONG *)(param_1 + 0x80);
        local_4c.bottom = *(LONG *)(param_1 + 0x84);
      }
      else {
        GetClientRect(*(HWND *)(param_1 + 0x54),&local_3c);
        local_54.x = local_3c.left;
        local_54.y = local_3c.top;
        ClientToScreen(*(HWND *)(param_1 + 0x54),&local_54);
        local_4c.left = local_54.x;
        local_4c.top = local_54.y;
        local_54.x = local_3c.right;
        local_54.y = local_3c.bottom;
        ClientToScreen(*(HWND *)(param_1 + 0x54),&local_54);
        local_4c.right = local_54.x;
        local_4c.bottom = local_54.y;
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
          uVar5 = FUN_005ae390(local_2c,s_CDaviMainWindow__SetMouseClipped_006a8b10,local_3c.left,
                               local_3c.top,local_3c.right,local_3c.bottom);
          local_4 = 0;
          FUN_005aff00(uVar5);
          local_4 = 0xffffffff;
          if (local_28 != 0) {
            cVar1 = *(char *)(local_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)(local_28 + -1));
            }
            else {
              *(char *)(local_28 + -1) = cVar1 + -1;
            }
          }
        }
      }
      ClipCursor(&local_4c);
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
        uVar5 = FUN_005ae390(local_1c,s_CDaviMainWindow__SetMouseClipped_006a8acc,local_4c.left,
                             local_4c.top,local_4c.right,local_4c.bottom);
        local_4 = 1;
        FUN_005aff00(uVar5);
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)(local_18 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return;
          }
          FUN_005fe5f0((char *)(local_18 + -1));
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

