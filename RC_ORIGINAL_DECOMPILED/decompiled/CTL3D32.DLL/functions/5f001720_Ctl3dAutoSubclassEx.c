/*
 * Ctl3dAutoSubclassEx at 5f001720
 * undefined4 __stdcall Ctl3dAutoSubclassEx(undefined4 param_1, uint param_2)
 * Address ranges: 5f001720-5f001858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dAutoSubclassEx(undefined4 param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HHOOK pHVar2;
  DWORD *pDVar3;
  uint uVar4;
  
                    /* 0x1720  27  Ctl3dAutoSubclassEx */
  if (DAT_5f005260 < 0x30a) {
    return 0;
  }
  if (DAT_5f005240 == 0) {
    return 0;
  }
  uVar4 = param_2 | 1;
  if ((param_2 & 2) != 0) {
    uVar4 = param_2 & 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f00529c != 0x400) {
    dwThreadId = GetCurrentThreadId();
    iVar1 = 0;
    if (0 < DAT_5f00529c) {
      pDVar3 = &DAT_5f0052a4;
      do {
        if (*pDVar3 == dwThreadId) {
          (&DAT_5f0052ac)[iVar1 * 5] = (&DAT_5f0052ac)[iVar1 * 5] + 1;
          goto LAB_5f001826;
        }
        pDVar3 = pDVar3 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_5f00529c);
    }
    pHVar2 = SetWindowsHookExW(5,FUN_5f002a60,DAT_5f00525c,dwThreadId);
    if (pHVar2 != (HHOOK)0x0) {
      (&DAT_5f0052a0)[DAT_5f00529c * 5] = param_1;
      (&DAT_5f0052a4)[DAT_5f00529c * 5] = dwThreadId;
      (&DAT_5f0052a8)[DAT_5f00529c * 5] = pHVar2;
      (&DAT_5f0052ac)[DAT_5f00529c * 5] = 1;
      *(uint *)(&DAT_5f0052b0 + DAT_5f00529c * 0x14) = uVar4;
      DAT_5f005298 = DAT_5f00529c;
      DAT_5f00529c = DAT_5f00529c + 1;
      DAT_5f005294 = dwThreadId;
LAB_5f001826:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
      return 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return 0;
}

