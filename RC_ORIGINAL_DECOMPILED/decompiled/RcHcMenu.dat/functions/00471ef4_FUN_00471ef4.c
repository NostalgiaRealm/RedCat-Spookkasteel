/*
 * FUN_00471ef4 at 00471ef4
 * undefined __register FUN_00471ef4(undefined4 param_1, undefined4 param_2, int param_3, char param_4)
 * Address ranges: 00471ef4-00471f66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471ef4(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_2009 [4069];
  undefined4 uStack_1024;
  undefined4 uStack_1020;
  undefined1 *puStack_101c;
  
  piVar1 = (int *)0x2;
  do {
    piVar2 = piVar1;
    piVar1 = (int *)((int)piVar2 + -1);
  } while ((int *)((int)piVar2 + -1) != (int *)0x0);
  if (param_4 == '\0') {
    if (param_3 != 0) {
      puStack_101c = local_2009;
      uStack_1020 = 1;
      uStack_1024 = 0x471f4c;
      (**(code **)(*piVar2 + 0xa8))(piVar2,param_2,param_3);
    }
    puStack_101c = (undefined1 *)0x471f5e;
    (**(code **)(*piVar2 + 0x1fc))(piVar2,param_2,local_2009);
  }
  else {
    puStack_101c = (undefined1 *)0x471f2c;
    (**(code **)(*piVar2 + 0x1fc))(piVar2,param_2,param_3);
  }
  return;
}

