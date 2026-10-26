/*
 * FUN_0043d97c at 0043d97c
 * undefined __register FUN_0043d97c(int param_1)
 * Address ranges: 0043d97c-0043d9e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d97c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x24),iVar4);
      (**(code **)(*piVar1 + 0x30))();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_00446f0c);
    if (((char)uVar2 != '\0') && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  return;
}

