/*
 * FUN_0047c5e6 at 0047c5e6
 * int __register FUN_0047c5e6(void)
 * Address ranges: 0047c5e6-0047c6e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0047c5e6(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  HMODULE hModule;
  int iVar4;
  FARPROC pFVar5;
  undefined4 *puVar6;
  short *psVar7;
  int unaff_ESI;
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  hModule = DAT_005713b0;
  if (DAT_005713b0 == (HMODULE)0x0) {
    hModule = FUN_0047c129();
    if (hModule == (HMODULE)0x0) {
      FUN_0047c5b1();
      hModule = (HMODULE)0x0;
      goto LAB_0047c6b2;
    }
    bVar2 = true;
    iVar4 = FUN_0047c3b8();
    if (iVar4 == 0) goto LAB_0047c6b2;
    bVar3 = true;
  }
  FUN_0047c0a8();
  bVar1 = true;
  pFVar5 = GetProcAddress(hModule,s_DbiInitFn_00571478);
  if ((pFVar5 != (FARPROC)0x0) && (iVar4 = (*pFVar5)(), (short)iVar4 == 0)) {
    if (DAT_005713b4 == 0) {
      puVar6 = (undefined4 *)FUN_0047c203();
      *puVar6 = hModule;
      FUN_0047c20d();
    }
    psVar7 = (short *)FUN_0047c203();
    *psVar7 = *psVar7 + 1;
    FUN_0047c20d();
    FUN_0047c111();
    return unaff_ESI;
  }
LAB_0047c6b2:
  if ((hModule != (HMODULE)0x0) && (bVar2)) {
    FreeLibrary(hModule);
  }
  if (bVar3) {
    FUN_0047c3c7();
  }
  if (bVar1) {
    FUN_0047c111();
  }
  return unaff_ESI;
}

