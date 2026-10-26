/*
 * FUN_004a20c0 at 004a20c0
 * int __register FUN_004a20c0(int param_1, uint param_2)
 * Address ranges: 004a20c0-004a21f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004a20c0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (6 < param_2) {
    FUN_00403d94("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0x7f) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar2 = FUN_0040320c(piVar4,(int)&LAB_0049893c);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_0040320c(piVar4,(int)&PTR_FUN_0041acd8);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_0040320c(piVar4,(int)&PTR_FUN_0049f730);
        if ((char)uVar2 != '\0') {
          piVar3 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0049f730);
          (**(code **)(*piVar3 + 0x88))(piVar3,*(undefined1 *)(param_1 + 0x55));
          piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0049f730);
          (**(code **)(*piVar4 + 0x84))(piVar4,*(undefined4 *)(param_1 + 0x58));
        }
      }
      else {
        piVar3 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0041acd8);
        FUN_004223f8(piVar3,*(char *)(param_1 + 0x55));
        piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0041acd8);
        FUN_004223a8(piVar4,*(int *)(param_1 + 0x58));
      }
    }
    else {
      piVar3 = (int *)FUN_00403224(piVar4,(int)&LAB_0049893c);
      FUN_0049b9c0(piVar3,*(char *)(param_1 + 0x55));
      piVar4 = (int *)FUN_00403224(piVar4,(int)&LAB_0049893c);
      FUN_0049b988(piVar4,*(int *)(param_1 + 0x58));
    }
  }
  return iVar1;
}

