/*
 * FUN_0053fc3c at 0053fc3c
 * undefined __register FUN_0053fc3c(int * param_1)
 * Address ranges: 0053fc3c-0053fc9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053fc3c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0048ec24(param_1[0xef]);
  if (iVar2 != 0) {
    uVar3 = FUN_0053eb9c((int)param_1);
    if ((char)uVar3 != '\0') {
      bVar1 = FUN_00438c84((int)param_1);
      if (bVar1) {
        iVar2 = FUN_0048ec24(param_1[0xef]);
        FUN_004f8a84(param_1,iVar2);
        iVar2 = (**(code **)(*(int *)param_1[0x85] + 8))();
        FUN_004f8b5c((int)param_1,iVar2);
      }
    }
  }
  return;
}

