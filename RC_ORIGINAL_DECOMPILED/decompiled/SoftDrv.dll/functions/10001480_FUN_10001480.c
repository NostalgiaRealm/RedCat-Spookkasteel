/*
 * FUN_10001480 at 10001480
 * undefined FUN_10001480(void)
 * Address ranges: 10001480-100014c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10001480(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1,param_1[9],0x11);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0x54))
                    ((int *)*param_1,param_1[5],param_1[6],param_1[7],0,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 100))((int *)*param_1);
  return iVar1 == 0;
}

