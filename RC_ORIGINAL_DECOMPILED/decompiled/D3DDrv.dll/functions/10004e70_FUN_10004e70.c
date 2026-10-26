/*
 * FUN_10004e70 at 10004e70
 * int __cdecl FUN_10004e70(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int * param_5, int param_6, undefined4 param_7)
 * Address ranges: 10004e70-10004f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int __cdecl
FUN_10004e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int local_80 [27];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  piVar2 = local_80;
  for (iVar1 = 0x1f; piVar2 = (int *)((int)piVar2 + 4), iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_5;
    param_5 = param_5 + 1;
  }
  local_80[1] = 0x7c;
  local_80[2] = 0x1007;
  if (param_6 != 0) {
    local_80[2] = 0x101007;
  }
  local_80[3] = param_3;
  local_4 = param_7;
  piVar2 = local_80;
  local_14 = 0x10005000;
  local_10 = 4;
  local_c = 0;
  local_8 = 0;
  local_80[4] = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x18))
                    (*(int **)(param_1 + 0x104),local_80 + 1,piVar2,0);
  if (iVar1 != 0) {
    return -(uint)(iVar1 != -0x7789fe84);
  }
  *(int **)(local_8 + 8) = piVar2;
  iVar1 = (**(code **)*piVar2)(piVar2,&DAT_10011838,local_8 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    return -1;
  }
  return 1;
}

