/*
 * FUN_1000a050 at 1000a050
 * undefined __stdcall FUN_1000a050(void)
 * Address ranges: 1000a050-1000a0c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a050(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_101c3de4) {
    puVar2 = (undefined4 *)((int)DAT_101c3de8 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_101c3dec,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_101c3de4);
  }
  HeapFree(DAT_101c3dec,0,DAT_101c3de8);
  HeapDestroy(DAT_101c3dec);
  return;
}

