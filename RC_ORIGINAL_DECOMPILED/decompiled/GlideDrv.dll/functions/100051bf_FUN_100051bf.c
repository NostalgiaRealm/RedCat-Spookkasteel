/*
 * FUN_100051bf at 100051bf
 * undefined __stdcall FUN_100051bf(void)
 * Address ranges: 100051bf-10005266
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100051bf(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_101f5ab4 == 3) {
    iVar1 = 0;
    if (0 < DAT_101f5aa4) {
      puVar2 = (undefined4 *)((int)DAT_101f5aa8 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_101f5ab0,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_101f5aa4);
    }
    HeapFree(DAT_101f5ab0,0,DAT_101f5aa8);
  }
  else if (DAT_101f5ab4 == 2) {
    ppuVar3 = &PTR_LOOP_1000eb98;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000eb98);
  }
  HeapDestroy(DAT_101f5ab0);
  return;
}

