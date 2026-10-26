/*
 * Ctl3dUnregister at 5f001650
 * undefined4 __stdcall Ctl3dUnregister(int param_1)
 * Address ranges: 5f001650-5f00170a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dUnregister(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1650  13  Ctl3dUnregister */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (0 < DAT_5f00529c) {
    do {
      if (((&DAT_5f0052a4)[iVar3 * 5] == DVar1) &&
         ((iVar2 = (&DAT_5f0052ac)[iVar3 * 5], (&DAT_5f0052ac)[iVar3 * 5] = iVar2 + -1,
          iVar2 + -1 == 0 || ((&DAT_5f0052a0)[iVar3 * 5] == param_1)))) {
        UnhookWindowsHookEx((HHOOK)(&DAT_5f0052a8)[iVar3 * 5]);
        DAT_5f00529c = DAT_5f00529c + -1;
        if (iVar3 < DAT_5f00529c) {
          puVar5 = &DAT_5f0052a0 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_5f00529c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00529c);
  }
  DAT_5f005244 = DAT_5f005244 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f005244 == 0) {
    FUN_5f002480();
  }
  return 1;
}

