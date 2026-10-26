/*
 * FUN_00516464 at 00516464
 * undefined __register FUN_00516464(int param_1, int * param_2, char param_3)
 * Address ranges: 00516464-00516506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516464(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  iVar1 = FUN_0051632c(param_1,param_2);
  if (iVar1 != -1) {
    local_14 = (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),iVar1);
  }
  if ((local_14 == 0) && (param_3 != '\0')) {
    iVar1 = FUN_005159c4((int *)&PTR_FUN_00515930,'\x01',param_2);
    *(char *)(iVar1 + 4) = param_3;
    *(undefined1 *)(iVar1 + 5) = 0;
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar1);
  }
  else {
    *(char *)(local_14 + 4) = param_3;
    if ((*(char *)(local_14 + 4) == '\0') && (*(char *)(local_14 + 5) == '\0')) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),iVar1);
    }
  }
  return;
}

