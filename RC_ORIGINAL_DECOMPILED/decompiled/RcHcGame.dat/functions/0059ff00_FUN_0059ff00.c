/*
 * FUN_0059ff00 at 0059ff00
 * undefined FUN_0059ff00(void)
 * Address ranges: 0059ff00-005a0026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059ff00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_34;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644ca0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00565730();
  local_4 = 0;
  iVar4 = 0;
  while( true ) {
    FUN_00457240();
    iVar2 = FUN_0041e8e0();
    if (iVar2 <= iVar4) break;
    FUN_00457240(param_1);
    FUN_005a0490();
    FUN_0059fe90();
    iVar4 = iVar4 + 1;
  }
  iVar2 = FUN_005195f0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    iVar4 = FUN_0060af10();
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar3 = FUN_005ae390();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005aff00(uVar3);
    if (local_34 != 0) {
      cVar1 = *(char *)(local_34 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(local_34 + -1) = cVar1 + -1;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return local_14;
}

