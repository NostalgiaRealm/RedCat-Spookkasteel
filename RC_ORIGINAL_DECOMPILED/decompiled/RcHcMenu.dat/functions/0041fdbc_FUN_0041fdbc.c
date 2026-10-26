/*
 * FUN_0041fdbc at 0041fdbc
 * undefined __register FUN_0041fdbc(int param_1, int * param_2)
 * Address ranges: 0041fdbc-0041fe3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041fdbc(int param_1,int *param_2)

{
  int iVar1;
  undefined2 extraout_var;
  int local_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    local_10 = 0;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    local_10 = FUN_004147b0(param_2);
    local_10 = local_10 + -4;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041fecc(param_1,param_2);
    }
    else {
      FUN_0041fe40(param_1,param_2);
    }
    (**(code **)(*param_2 + 0xc))(param_2,local_10,0);
    iVar1 = FUN_004147cc(param_2);
    local_10 = iVar1 - local_10;
    (**(code **)(*param_2 + 8))(param_2,&local_10,4);
    (**(code **)(*param_2 + 0xc))(param_2,0,CONCAT22(extraout_var,2));
  }
  return;
}

