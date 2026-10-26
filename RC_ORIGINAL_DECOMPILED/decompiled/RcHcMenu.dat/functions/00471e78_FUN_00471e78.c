/*
 * FUN_00471e78 at 00471e78
 * char __register FUN_00471e78(undefined4 param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * Address ranges: 00471e78-00471ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00471e78(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_200a [4070];
  undefined4 uStack_1024;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  char local_9;
  
  piVar1 = (int *)0x2;
  do {
    piVar2 = piVar1;
    piVar1 = (int *)((int)piVar2 + -1);
  } while ((int *)((int)piVar2 + -1) != (int *)0x0);
  if (param_4 == '\0') {
    uStack_101c = 0x471ec7;
    local_9 = (**(code **)(*piVar2 + 0x228))(piVar2,param_2,local_200a);
    if (local_9 != '\0') {
      uStack_1020 = 0;
      uStack_1024 = 0x471ee8;
      uStack_101c = param_3;
      (**(code **)(*piVar2 + 0xa8))(piVar2,param_2,local_200a);
    }
  }
  else {
    uStack_101c = 0x471eb0;
    local_9 = (**(code **)(*piVar2 + 0x228))(piVar2,param_2,param_3);
  }
  return local_9;
}

