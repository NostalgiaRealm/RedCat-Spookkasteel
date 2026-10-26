/*
 * FUN_005f0080 at 005f0080
 * undefined FUN_005f0080(void)
 * Address ranges: 005f0080-005f019a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f0080(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006477bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0060b1db(local_24,0x18,1,&LAB_005ee4d0,FUN_005e9860);
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  local_4 = 1;
  if (puVar1 != *(undefined4 **)(param_1 + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_3);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x4c));
  }
  FUN_005f15b0(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != *(int *)(param_1 + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))(param_3);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)(param_1 + 0x48));
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != *(int *)(param_1 + 0x30)) {
    do {
      FUN_005f3850(param_3);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)(param_1 + 0x30));
  }
  FUN_005e27d0(local_24);
  *param_2 = &PTR_FUN_00650ad4;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  FUN_0060af6c(auStack_28,0x18,1,FUN_005e9860);
  ExceptionList = pvStack_10;
  return param_2;
}

