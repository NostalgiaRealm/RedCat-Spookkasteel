/*
 * FUN_1000b9dd at 1000b9dd
 * undefined4 * __stdcall FUN_1000b9dd(void)
 * Address ranges: 1000b9dd-1000ba8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000b9dd(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100ec824 == DAT_100ec814) {
    pvVar2 = HeapReAlloc(DAT_100ec82c,0,DAT_100ec828,(DAT_100ec814 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100ec814 = DAT_100ec814 + 0x10;
    DAT_100ec828 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100ec828 + DAT_100ec824 * 0x14);
  pvVar2 = HeapAlloc(DAT_100ec82c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100ec824 = DAT_100ec824 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100ec82c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

