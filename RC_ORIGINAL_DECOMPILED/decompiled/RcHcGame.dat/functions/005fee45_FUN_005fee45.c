/*
 * FUN_005fee45 at 005fee45
 * undefined FUN_005fee45(void)
 * Address ranges: 005fee45-005feebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005fee45(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = 1;
  iVar4 = 0;
  puVar3 = &DAT_006514d0;
  do {
    if (uVar1 == (param_2 & 0xfffffffb)) break;
    uVar1 = puVar3[1];
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (uVar1 != 0);
  if (((&DAT_006514d0)[iVar4] != 0) &&
     (iVar4 = FUN_0060d46b(param_1,(&PTR_DAT_006b187c)[iVar4]), iVar4 != 0)) {
    if ((param_2 & 4) == 0) {
      return iVar4;
    }
    iVar2 = FUN_0060e481(iVar4,0,2);
    if (iVar2 == 0) {
      return iVar4;
    }
    FUN_0060d30d(iVar4);
  }
  return 0;
}

