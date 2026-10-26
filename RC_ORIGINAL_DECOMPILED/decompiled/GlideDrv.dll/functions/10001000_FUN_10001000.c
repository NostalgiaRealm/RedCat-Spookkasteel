/*
 * FUN_10001000 at 10001000
 * bool __cdecl FUN_10001000(int param_1, LPCSTR param_2)
 * Address ranges: 10001000-100010f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_10001000(int param_1,LPCSTR param_2)

{
  ushort uVar1;
  FILE *pFVar2;
  uint uVar3;
  char *pcVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int local_784;
  char local_780 [1920];
  
  pFVar2 = (FILE *)FUN_10003f39(param_2,&DAT_1000e06c);
  if (pFVar2 == (FILE *)0x0) {
    return false;
  }
  uVar3 = FUN_10003dcf(s_BM___1000e030,0xe,1,(int *)pFVar2);
  if (uVar3 != 1) {
    return false;
  }
  uVar3 = FUN_10003dcf(&DAT_1000e040,0x2c,1,(int *)pFVar2);
  if (uVar3 != 1) {
    return false;
  }
  puVar6 = (ushort *)(param_1 + 0x95b00);
  local_784 = 0x1e0;
  do {
    pcVar4 = local_780;
    iVar7 = 0x280;
    puVar5 = puVar6;
    do {
      uVar1 = *puVar5;
      *pcVar4 = (char)*puVar5 << 3;
      puVar5 = puVar5 + 1;
      pcVar4[1] = (char)(uVar1 >> 5) << 2;
      pcVar4[2] = (byte)(uVar1 >> 8) & 0xf8;
      pcVar4 = pcVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_10003dcf(local_780,0x780,1,(int *)pFVar2);
    puVar6 = puVar6 + -0x280;
    local_784 = local_784 + -1;
  } while (local_784 != 0);
  iVar7 = FUN_10003d52(pFVar2);
  return (bool)('\x01' - (iVar7 != 0));
}

