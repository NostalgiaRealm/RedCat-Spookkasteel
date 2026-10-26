/*
 * FUN_0040e204 at 0040e204
 * HGLOBAL __register FUN_0040e204(void)
 * Address ranges: 0040e204-0040e278
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HGLOBAL FUN_0040e204(void)

{
  undefined4 *puVar1;
  HMODULE hModule;
  HRSRC pHVar2;
  HGLOBAL pvVar3;
  
  if (*(int *)PTR_DAT_005721e4 == 0) {
    pvVar3 = (HGLOBAL)0x0;
    for (puVar1 = *(undefined4 **)PTR_DAT_00572514; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      hModule = (HMODULE)puVar1[1];
      pHVar2 = FindResourceA(hModule,"DVCLAL",(LPCSTR)0xa);
      pvVar3 = LoadResource(hModule,pHVar2);
      if (pvVar3 != (HGLOBAL)0x0) break;
    }
  }
  else {
    pHVar2 = FindResourceA(*(HMODULE *)PTR_DAT_005721e4,"DVCLAL",(LPCSTR)0xa);
    pvVar3 = LoadResource(*(HMODULE *)PTR_DAT_005721e4,pHVar2);
  }
  if (pvVar3 == (HGLOBAL)0x0) {
    FUN_0040e1b0();
  }
  return pvVar3;
}

