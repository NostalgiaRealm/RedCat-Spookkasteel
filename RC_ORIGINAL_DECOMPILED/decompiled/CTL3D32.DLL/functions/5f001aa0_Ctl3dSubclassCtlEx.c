/*
 * Ctl3dSubclassCtlEx at 5f001aa0
 * undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
 * Address ranges: 5f001aa0-5f001b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dSubclassCtlEx(HWND param_1,int param_2)

{
  HANDLE pvVar1;
  LONG LVar2;
  HWND pHVar3;
  int iVar4;
  
                    /* 0x1aa0  25  Ctl3dSubclassCtlEx */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  if ((-1 < param_2) && (param_2 < 7)) {
    pvVar1 = FUN_5f001000(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      return 0;
    }
    LVar2 = GetWindowLongW(param_1,-0x10);
    pHVar3 = GetParent(param_1);
    iVar4 = (*(code *)(&PTR_FUN_5f00b064)[param_2 * 0xd])(param_1,LVar2,0xffff,0,pHVar3);
    if (iVar4 == 1) {
      FUN_5f001070(param_1,(&DAT_5f00a2a0)[param_2 * 10]);
    }
    return 1;
  }
  return 0;
}

