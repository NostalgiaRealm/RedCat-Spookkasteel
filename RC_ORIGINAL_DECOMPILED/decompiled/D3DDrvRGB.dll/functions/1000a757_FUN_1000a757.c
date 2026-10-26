/*
 * FUN_1000a757 at 1000a757
 * undefined4 * __stdcall FUN_1000a757(void)
 * Address ranges: 1000a757-1000a81e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000a757(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_1000b2ca(2);
  iVar3 = 0;
  if (0 < DAT_100ed840) {
    do {
      iVar1 = *(int *)(DAT_100ec830 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_100ec830) = pvVar2;
        if (*(int *)(iVar3 + DAT_100ec830) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_100ec830) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_100ec830) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_100ec830);
LAB_1000a7fb:
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
        FUN_10009a6f(iVar3,iVar1);
        iVar1 = *(int *)(DAT_100ec830 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_100ec830 + iVar3 * 4);
          goto LAB_1000a7fb;
        }
        FUN_10009ac1(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_100ed840);
  }
  FUN_1000b32b(2);
  return puVar4;
}

