/*
 * FUN_1002d4c8 at 1002d4c8
 * undefined FUN_1002d4c8(void)
 * Address ranges: 1002d4c8-1002d56f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d4c8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1052a9b8 == 3) {
    iVar1 = 0;
    if (0 < DAT_1052a9a8) {
      puVar2 = (undefined4 *)((int)DAT_1052a9ac + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1052a9b4,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1052a9a8);
    }
    HeapFree(DAT_1052a9b4,0,DAT_1052a9ac);
  }
  else if (DAT_1052a9b8 == 2) {
    ppuVar3 = &PTR_LOOP_1003d350;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1003d350);
  }
  HeapDestroy(DAT_1052a9b4);
  return;
}

