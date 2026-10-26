/*
 * FUN_1002a8e5 at 1002a8e5
 * undefined FUN_1002a8e5(void)
 * Address ranges: 1002a8e5-1002a9ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1002a8e5(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_1002e819(2);
  iVar3 = 0;
  if (0 < DAT_1052bae0) {
    do {
      iVar1 = *(int *)(DAT_1052aac4 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_1052aac4) = pvVar2;
        if (*(int *)(iVar3 + DAT_1052aac4) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1052aac4) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1052aac4) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_1052aac4);
LAB_1002a989:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_10029bfd(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1052aac4 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_1052aac4 + iVar3 * 4);
          goto LAB_1002a989;
        }
        FUN_10029c4f(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1052bae0);
  }
  FUN_1002e87a(2);
  return puVar4;
}

