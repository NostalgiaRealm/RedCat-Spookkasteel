/*
 * FUN_00413308 at 00413308
 * undefined __register FUN_00413308(int * param_1, int * param_2)
 * Address ranges: 00413308-00413361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413308(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,param_1[1]);
  if ((char)uVar1 == '\0') {
    FUN_004122c0(&PTR_FUN_0041077c,(undefined4 *)PTR_PTR_005723b8,0);
  }
  FUN_004121d8((int *)param_1[2],(int)param_2);
  param_2[1] = (int)param_1;
  param_2[2] = param_1[4];
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0xc))(param_1,param_2);
  FUN_00412f28(param_1);
  FUN_004132a4(param_1,param_2,0);
  return;
}

