/*
 * FUN_1002dc15 at 1002dc15
 * undefined FUN_1002dc15(void)
 * Address ranges: 1002dc15-1002dcc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1002dc15(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1052a9a8 == DAT_1052a998) {
    pvVar2 = HeapReAlloc(DAT_1052a9b4,0,DAT_1052a9ac,(DAT_1052a998 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1052a998 = DAT_1052a998 + 0x10;
    DAT_1052a9ac = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1052a9ac + DAT_1052a9a8 * 0x14);
  pvVar2 = HeapAlloc(DAT_1052a9b4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1052a9a8 = DAT_1052a9a8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1052a9b4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

