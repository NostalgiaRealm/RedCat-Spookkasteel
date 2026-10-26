/*
 * Ctl3dUnAutoSubclass at 5f001890
 * undefined4 __stdcall Ctl3dUnAutoSubclass(void)
 * Address ranges: 5f001890-5f001928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dUnAutoSubclass(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1890  24  Ctl3dUnAutoSubclass */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (0 < DAT_5f00529c) {
    do {
      if (((&DAT_5f0052a4)[iVar3 * 5] == DVar1) &&
         (iVar2 = (&DAT_5f0052ac)[iVar3 * 5], (&DAT_5f0052ac)[iVar3 * 5] = iVar2 + -1,
         iVar2 + -1 == 0)) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return 1;
}

