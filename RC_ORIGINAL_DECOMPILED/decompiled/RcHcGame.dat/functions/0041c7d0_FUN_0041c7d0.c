/*
 * FUN_0041c7d0 at 0041c7d0
 * undefined FUN_0041c7d0(void)
 * Address ranges: 0041c7d0-0041c7ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 51 for .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 51 for
   .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred. */

char * FUN_0041c7d0(void)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  
  uVar1 = FUN_0060a4a0();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  pcVar2 = s_BONE13_0068f27c;
  if (!bVar3) {
    pcVar2 = s_BONE07_0068f274;
  }
  return pcVar2;
}

