/*
 * FUN_004ad478 at 004ad478
 * int __register FUN_004ad478(int param_1, uint param_2)
 * Address ranges: 004ad478-004ad5b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004ad478(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  if (6 < param_2) {
    FUN_00403d94("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0x7f) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar3 = FUN_0040320c(piVar4,(int)&LAB_0049893c);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_0040320c(piVar4,(int)&PTR_FUN_0041acd8);
      if ((char)uVar3 == '\0') {
        uVar3 = FUN_0040320c(piVar4,(int)&PTR_FUN_0049f730);
        if ((char)uVar3 != '\0') {
          piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0049f730);
          (**(code **)(*piVar4 + 0x88))(piVar4,(char)piVar4[0x15]);
          (**(code **)(*piVar4 + 0x84))(piVar4,piVar4[0x14]);
        }
      }
      else {
        piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_0041acd8);
        FUN_004223f8(piVar4,(char)piVar4[0xc]);
        uVar5 = FUN_00421574(piVar4);
        FUN_004223a8(piVar4,uVar5);
      }
    }
    else {
      piVar4 = (int *)FUN_00403224(piVar4,(int)&LAB_0049893c);
      FUN_0049b9c0(piVar4,(char)piVar4[0x22]);
      uVar5 = FUN_0049af2c((int)piVar4);
      FUN_0049b988(piVar4,uVar5);
    }
  }
  return iVar1;
}

