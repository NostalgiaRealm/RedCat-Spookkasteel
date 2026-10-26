/*
 * FUN_1000a86d at 1000a86d
 * undefined4 * __stdcall FUN_1000a86d(void)
 * Address ranges: 1000a86d-1000a91d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000a86d(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_101c3de4 == DAT_101c3dd4) {
    pvVar2 = HeapReAlloc(DAT_101c3dec,0,DAT_101c3de8,(DAT_101c3dd4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_101c3dd4 = DAT_101c3dd4 + 0x10;
    DAT_101c3de8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_101c3de8 + DAT_101c3de4 * 0x14);
  pvVar2 = HeapAlloc(DAT_101c3dec,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_101c3de4 = DAT_101c3de4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_101c3dec,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

