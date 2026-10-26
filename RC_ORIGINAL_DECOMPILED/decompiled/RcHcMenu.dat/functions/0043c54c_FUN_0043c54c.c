/*
 * FUN_0043c54c at 0043c54c
 * undefined __register FUN_0043c54c(int * param_1, int param_2, int param_3)
 * Address ranges: 0043c54c-0043c5b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043c54c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14 [2];
  
  if ((char)param_3 == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    iVar1 = FUN_0043ab70((int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_0041160c(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),local_14);
      iVar1 = FUN_0043b318((int)param_1,local_14,&uStack_18);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      uVar2 = FUN_0043c4d0(param_2,iVar1);
      (**(code **)(*param_1 + 8))(param_1,param_2,uVar2,iVar1);
    }
  }
  return;
}

