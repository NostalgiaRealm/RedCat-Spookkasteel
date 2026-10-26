/*
 * FUN_0047faa8 at 0047faa8
 * undefined __register FUN_0047faa8(undefined * param_1, int * param_2)
 * Address ranges: 0047faa8-0047fae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047faa8(undefined *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  LPSTR pDst;
  LPCSTR pSrc;
  
  uVar1 = FUN_00404030((int)param_1);
  FUN_00404364(param_2,uVar1);
  iVar2 = FUN_00404030(*param_2);
  if (0 < iVar2) {
    pDst = FUN_004041f4((undefined *)*param_2);
    pSrc = FUN_004041f4(param_1);
    CharToOemA(pSrc,pDst);
  }
  return;
}

