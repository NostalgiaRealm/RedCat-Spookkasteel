/*
 * FUN_1000590c at 1000590c
 * undefined4 * __stdcall FUN_1000590c(void)
 * Address ranges: 1000590c-100059bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000590c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_101f5aa4 == DAT_101f5a94) {
    pvVar2 = HeapReAlloc(DAT_101f5ab0,0,DAT_101f5aa8,(DAT_101f5a94 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_101f5a94 = DAT_101f5a94 + 0x10;
    DAT_101f5aa8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_101f5aa8 + DAT_101f5aa4 * 0x14);
  pvVar2 = HeapAlloc(DAT_101f5ab0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_101f5aa4 = DAT_101f5aa4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_101f5ab0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

