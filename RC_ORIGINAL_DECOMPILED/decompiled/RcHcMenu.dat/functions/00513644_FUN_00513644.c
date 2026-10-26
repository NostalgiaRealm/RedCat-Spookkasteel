/*
 * FUN_00513644 at 00513644
 * undefined __register FUN_00513644(int * param_1, undefined4 param_2, char param_3)
 * Address ranges: 00513644-005136c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00513644(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '=') {
    if ((char)param_1[0x9e] == '\0') {
      (**(code **)(*param_1 + 0x130))(param_1,1,*param_1,param_2);
    }
    else {
      iVar1 = FUN_00513f3c((int)param_1);
      FUN_004fcaf8(iVar1,(uint *)&DAT_005136d0);
      *(undefined1 *)(param_1 + 0x9e) = 0;
    }
  }
  if (((((byte)(param_3 - 0x2aU) < 2) || (param_3 == '-')) || (param_3 == '/')) || (param_3 == 'x'))
  {
    iVar1 = FUN_00513f3c((int)param_1);
    FUN_004fcaf8(iVar1,(uint *)&LAB_005136dc);
    *(undefined1 *)(param_1 + 0x9e) = 1;
  }
  return;
}

