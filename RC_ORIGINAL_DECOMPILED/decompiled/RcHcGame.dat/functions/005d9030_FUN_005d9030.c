/*
 * FUN_005d9030 at 005d9030
 * undefined FUN_005d9030(void)
 * Address ranges: 005d9030-005d90d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005d9030(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  piVar1 = (int *)FUN_005cf370(0x400c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = param_1;
  iVar2 = FUN_005d9790(DAT_006cf00c);
  piVar1[1] = iVar2;
  iVar2 = 0;
  pbVar6 = (byte *)(param_1 + 2);
  do {
    uVar4 = (uint)pbVar6[-1];
    uVar3 = (uint)*pbVar6;
    uVar5 = (uint)pbVar6[-2];
    FUN_005d9590(piVar1[1],uVar5,uVar4,uVar3,iVar2);
    FUN_005d9610(piVar1,uVar5,uVar4,uVar3,iVar2,
                 (uVar5 & 0xfffffff0) * 0x10 + ((int)uVar3 >> 4) + (uVar4 & 0xfffffff0));
    iVar2 = iVar2 + 1;
    pbVar6 = pbVar6 + 3;
  } while (iVar2 < 0x100);
  return piVar1;
}

