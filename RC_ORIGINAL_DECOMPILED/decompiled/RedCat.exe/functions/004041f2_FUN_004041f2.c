/*
 * FUN_004041f2 at 004041f2
 * undefined4 * __stdcall FUN_004041f2(void)
 * Address ranges: 004041f2-004042a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_004041f2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00408120 == DAT_00408110) {
    pvVar2 = HeapReAlloc(DAT_00409364,0,DAT_00408124,(DAT_00408110 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00408110 = DAT_00408110 + 0x10;
    DAT_00408124 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00408124 + DAT_00408120 * 0x14);
  pvVar2 = HeapAlloc(DAT_00409364,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00408120 = DAT_00408120 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00409364,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

