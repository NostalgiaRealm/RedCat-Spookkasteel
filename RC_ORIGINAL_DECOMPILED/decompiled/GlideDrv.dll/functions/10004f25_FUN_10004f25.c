/*
 * FUN_10004f25 at 10004f25
 * undefined4 * __stdcall FUN_10004f25(void)
 * Address ranges: 10004f25-10004fec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10004f25(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10006171(2);
  iVar3 = 0;
  if (0 < DAT_101f6ac0) {
    do {
      iVar1 = *(int *)(DAT_101f5ab8 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_101f5ab8) = pvVar2;
        if (*(int *)(iVar3 + DAT_101f5ab8) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101f5ab8) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101f5ab8) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_101f5ab8);
LAB_10004fc9:
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
        FUN_100044b7(iVar3,iVar1);
        iVar1 = *(int *)(DAT_101f5ab8 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_101f5ab8 + iVar3 * 4);
          goto LAB_10004fc9;
        }
        FUN_10004509(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_101f6ac0);
  }
  FUN_100061d2(2);
  return puVar4;
}

