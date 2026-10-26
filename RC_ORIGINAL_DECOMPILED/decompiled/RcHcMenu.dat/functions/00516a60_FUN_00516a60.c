/*
 * FUN_00516a60 at 00516a60
 * undefined __register FUN_00516a60(int param_1, undefined * param_2, undefined * param_3)
 * Address ranges: 00516a60-00516a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516a60(int param_1,undefined *param_2,undefined *param_3)

{
  int iVar1;
  DWORD DVar2;
  BYTE *pBVar3;
  char cVar4;
  
  iVar1 = FUN_00404030((int)param_3);
  DVar2 = iVar1 + 1;
  cVar4 = '\x01';
  pBVar3 = FUN_004041f4(param_3);
  FUN_00516b6c(param_1,param_2,pBVar3,cVar4,DVar2);
  return;
}

