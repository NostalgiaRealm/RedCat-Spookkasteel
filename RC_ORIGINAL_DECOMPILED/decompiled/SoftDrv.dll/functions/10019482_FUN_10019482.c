/*
 * FUN_10019482 at 10019482
 * undefined FUN_10019482(void)
 * Address ranges: 10019482-10019529
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019482(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1020fd74 == 3) {
    iVar1 = 0;
    if (0 < DAT_1020fd64) {
      puVar2 = (undefined4 *)((int)DAT_1020fd68 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1020fd70,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1020fd64);
    }
    HeapFree(DAT_1020fd70,0,DAT_1020fd68);
  }
  else if (DAT_1020fd74 == 2) {
    ppuVar3 = &PTR_LOOP_100219a0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_100219a0);
  }
  HeapDestroy(DAT_1020fd70);
  return;
}

