/*
 * FUN_0044bf64 at 0044bf64
 * undefined __register FUN_0044bf64(int * param_1)
 * Address ranges: 0044bf64-0044c095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 38 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 38 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044bf64(int *param_1)

{
  LPARAM LVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  LONG LVar4;
  HWND hWndInsertAfter;
  int iVar5;
  int iVar6;
  UINT UVar7;
  HMENU hMenu;
  int cx;
  WPARAM WVar8;
  HINSTANCE hInstance;
  int cy;
  undefined4 *lpParam;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0044947c(param_1);
  if (*PTR_DAT_005722c4 != '\0') {
    if (*(char *)((int)param_1 + 0x211) == '\x03') {
      LVar1 = 0;
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
    else {
      LVar1 = FUN_0044c87c((int)param_1);
      WVar8 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,UVar7,WVar8,LVar1);
    }
  }
  lpParam = &local_10;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(char *)((int)param_1 + 0x217) == '\x02') {
      local_c = 0xff00;
      local_10 = 0;
      if (param_1[0x90] != 0) {
        local_10 = FUN_0044169c(param_1[0x90]);
      }
      hMenu = (HMENU)0x0;
      hInstance = DAT_005734dc;
      pHVar2 = (HWND)FUN_00438988(param_1);
      iVar5 = FUN_004321bc(param_1);
      iVar6 = FUN_00432178(param_1);
      pHVar2 = CreateWindowExA(0x200,"MDICLIENT",(LPCSTR)0x0,0x56330001,0,0,iVar6,iVar5,pHVar2,hMenu
                               ,hInstance,lpParam);
      param_1[0x8f] = (int)pHVar2;
      puVar3 = FUN_004484b8();
      param_1[0x98] = (int)puVar3;
      LVar4 = GetWindowLongA((HWND)param_1[0x8f],-4);
      param_1[0x97] = LVar4;
      SetWindowLongA((HWND)param_1[0x8f],-4,param_1[0x98]);
    }
    else if (*(char *)((int)param_1 + 0x217) == '\x03') {
      UVar7 = 0x13;
      cy = 0;
      cx = 0;
      iVar6 = 0;
      iVar5 = 0;
      hWndInsertAfter = (HWND)0xffffffff;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,iVar5,iVar6,cx,cy,UVar7);
    }
  }
  return;
}

