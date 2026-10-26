/*
 * FUN_0049b514 at 0049b514
 * undefined __register FUN_0049b514(int * param_1, int * param_2)
 * Address ranges: 0049b514-0049b57c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b514(int *param_1,int *param_2)

{
  char cVar1;
  undefined2 local_1a;
  int local_18;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    local_1a = 0x4d42;
    local_10 = FUN_0049ac58((int)local_8);
    local_10 = local_10 + 0xe;
    local_18 = *(int *)(*(int *)(local_8[9] + 0xc) + 0x14) + local_10;
    local_14 = 0;
    local_12 = 0;
    FUN_0041483c(local_c,&local_1a,0xe);
    (**(code **)(*local_8 + 0x44))(local_8,local_c);
  }
  return;
}

