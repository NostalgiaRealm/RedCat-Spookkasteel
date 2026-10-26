/*
 * FUN_004340f8 at 004340f8
 * int * __register FUN_004340f8(int * param_1, undefined4 * param_2)
 * Address ranges: 004340f8-0043417d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004340f8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_1c [4];
  
  piVar3 = local_1c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  piVar3 = (int *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x54))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar1 = FUN_00402fdc(param_1);
    if (iVar2 != iVar1) {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      piVar3 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,*(undefined4 *)PTR_DAT_005723fc);
      FUN_00431f54(piVar3,local_1c[1]);
      FUN_00431f34(piVar3,local_1c[0]);
      FUN_00432190(piVar3,local_1c[2] - local_1c[0]);
      FUN_004321d4(piVar3,local_1c[3] - local_1c[1]);
    }
  }
  return piVar3;
}

