/*
 * FUN_100096ae at 100096ae
 * undefined4 * __stdcall FUN_100096ae(void)
 * Address ranges: 100096ae-10009775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100096ae(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_1000a15a(2);
  iVar3 = 0;
  if (0 < DAT_101c4e00) {
    do {
      iVar1 = *(int *)(DAT_101c3df0 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_101c3df0) = pvVar2;
        if (*(int *)(iVar3 + DAT_101c3df0) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101c3df0) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101c3df0) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_101c3df0);
LAB_10009752:
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
        FUN_100089c6(iVar3,iVar1);
        iVar1 = *(int *)(DAT_101c3df0 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_101c3df0 + iVar3 * 4);
          goto LAB_10009752;
        }
        FUN_10008a18(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_101c4e00);
  }
  FUN_1000a1bb(2);
  return puVar4;
}

