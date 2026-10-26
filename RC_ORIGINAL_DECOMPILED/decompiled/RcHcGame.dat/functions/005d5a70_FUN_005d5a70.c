/*
 * FUN_005d5a70 at 005d5a70
 * undefined FUN_005d5a70(void)
 * Address ranges: 005d5a70-005d5ae1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d5a70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_005cf370(0xfcc);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_005d9790(DAT_006ceffc);
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 4) = iVar3;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0x3f2;
  piVar4 = (int *)FUN_005d9790(DAT_006ceffc);
  piVar4[1] = (int)piVar4;
  piVar4[3] = 0;
  piVar4[2] = 0;
  piVar4[4] = 0;
  *piVar4 = iVar3;
  puVar1 = *(undefined4 **)(iVar3 + 4);
  piVar4[1] = (int)puVar1;
  *puVar1 = piVar4;
  *(int **)(*piVar4 + 4) = piVar4;
  *(int **)(iVar2 + 0xfc8) = piVar4;
  return iVar2;
}

