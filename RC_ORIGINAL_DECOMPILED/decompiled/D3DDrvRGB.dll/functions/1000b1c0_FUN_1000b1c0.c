/*
 * FUN_1000b1c0 at 1000b1c0
 * undefined __stdcall FUN_1000b1c0(void)
 * Address ranges: 1000b1c0-1000b234
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b1c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_100ec824) {
    puVar2 = (undefined4 *)((int)DAT_100ec828 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_100ec82c,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_100ec824);
  }
  HeapFree(DAT_100ec82c,0,DAT_100ec828);
  HeapDestroy(DAT_100ec82c);
  return;
}

