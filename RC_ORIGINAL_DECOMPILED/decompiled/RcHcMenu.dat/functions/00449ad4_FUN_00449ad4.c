/*
 * FUN_00449ad4 at 00449ad4
 * undefined __register FUN_00449ad4(int * param_1, undefined4 * param_2)
 * Address ranges: 00449ad4-00449b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449ad4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int local_1c [4];
  
  bVar5 = 0;
  piVar4 = local_1c;
  iVar1 = FUN_004321bc(param_1);
  iVar2 = FUN_004242a4(iVar1,*(int *)(param_1[0x7d] + 0x10));
  iVar3 = FUN_00432178(param_1);
  iVar1 = param_1[0x7c];
  iVar3 = FUN_004242a4(*(int *)(iVar1 + 0x10),iVar3);
  FUN_00411640(-*(int *)(iVar1 + 0xc),-*(int *)(param_1[0x7d] + 0xc),iVar3,piVar4,iVar2);
  piVar4 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar4;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
  }
  FUN_00434bdc();
  return;
}

