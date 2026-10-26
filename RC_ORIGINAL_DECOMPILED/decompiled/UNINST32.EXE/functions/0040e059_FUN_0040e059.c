/*
 * FUN_0040e059 at 0040e059
 * undefined4 * __stdcall FUN_0040e059(void)
 * Address ranges: 0040e059-0040e109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0040e059(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00413dd8 == DAT_00413dc8) {
    pvVar2 = HeapReAlloc(DAT_00413de0,0,DAT_00413ddc,(DAT_00413dc8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00413dc8 = DAT_00413dc8 + 0x10;
    DAT_00413ddc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00413ddc + DAT_00413dd8 * 0x14);
  pvVar2 = HeapAlloc(DAT_00413de0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00413dd8 = DAT_00413dd8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00413de0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

