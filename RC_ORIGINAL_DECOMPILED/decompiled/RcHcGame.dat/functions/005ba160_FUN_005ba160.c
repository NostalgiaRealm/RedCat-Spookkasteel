/*
 * FUN_005ba160 at 005ba160
 * undefined FUN_005ba160(void)
 * Address ranges: 005ba160-005ba248
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ba160(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_694 [24];
  undefined4 local_634 [12];
  undefined1 local_604 [1540];
  
  *(undefined4 *)(param_4 + 0x10c) = 0;
  puVar1 = (undefined4 *)FUN_005c9470();
  puVar4 = local_694;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = local_694;
  puVar4 = local_634;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_005b5540(-*(float *)(param_1 + 0x38c));
  FUN_005b5920();
  FUN_005b32c0(local_694);
  FUN_005c9420();
  FUN_005d09d0(param_3,param_2,local_604);
  iVar3 = 0;
  do {
    uVar2 = FUN_0059be40(local_604,param_4);
    FUN_005ba250(param_1,iVar3,uVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  FUN_005c9420();
  return;
}

