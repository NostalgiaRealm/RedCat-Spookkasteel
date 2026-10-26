/*
 * FUN_1001fc90 at 1001fc90
 * undefined FUN_1001fc90(void)
 * Address ranges: 1001fc90-1001fd31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1001fc90(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  piVar1 = (int *)FUN_100142d0(0x400c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = param_1;
  iVar2 = FUN_1001e5a0(DAT_104e9948);
  piVar1[1] = iVar2;
  iVar2 = 0;
  pbVar6 = (byte *)(param_1 + 2);
  do {
    uVar4 = (uint)pbVar6[-1];
    uVar3 = (uint)*pbVar6;
    uVar5 = (uint)pbVar6[-2];
    FUN_100201f0(piVar1[1],uVar5,uVar4,uVar3,iVar2);
    FUN_10020270(piVar1,uVar5,uVar4,uVar3,iVar2,
                 (uVar5 & 0xfffffff0) * 0x10 + ((int)uVar3 >> 4) + (uVar4 & 0xfffffff0));
    iVar2 = iVar2 + 1;
    pbVar6 = pbVar6 + 3;
  } while (iVar2 < 0x100);
  return piVar1;
}

