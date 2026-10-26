/*
 * FUN_00421574 at 00421574
 * uint __register FUN_00421574(int * param_1)
 * Address ranges: 00421574-004215b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00421574(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0xb] == 0x20000000) {
    uVar1 = FUN_00421544((int)param_1);
    if ((char)uVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      piVar4 = (int *)FUN_00421490(param_1);
      uVar2 = FUN_0041ced4(piVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_0041b688(param_1[0xb]);
  }
  return uVar2 | 0x2000000;
}

