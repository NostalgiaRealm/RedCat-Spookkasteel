/*
 * FUN_0060ce3a at 0060ce3a
 * undefined FUN_0060ce3a(void)
 * Address ranges: 0060ce3a-0060cef2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0060ce3a(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_006b23c4 == (undefined1 *)0x0) {
    DAT_006b23c4 = _malloc(0x351);
  }
  *DAT_006b23c4 = 0;
  FUN_0060d00b(DAT_006b23c4,3,PTR_s_LC_COLLATE_006b23cc,&DAT_006a678c,PTR_DAT_006b23d0);
  ppuVar3 = &PTR_DAT_006b23d0;
  do {
    FUN_00611120(DAT_006b23c4,&DAT_006a154c);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_0060d00b(DAT_006b23c4,3,ppuVar3[2],&DAT_006a678c,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x6b2400);
  if (!bVar1) {
    return DAT_006b23c4;
  }
  FUN_0060b25d(DAT_006b23c4);
  DAT_006b23c4 = (undefined1 *)0x0;
  return PTR_DAT_006b23dc;
}

