/*
 * FUN_0059f1e0 at 0059f1e0
 * undefined FUN_0059f1e0(void)
 * Address ranges: 0059f1e0-0059f2f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0059f1e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00457240(param_1);
  iVar2 = FUN_0041e8e0();
  if (0 < iVar2) {
    FUN_0059efc0();
  }
  iVar3 = FUN_005195f0();
  iVar2 = *(int *)(iVar3 + 100);
  if (iVar2 == -0x80000000) {
    iVar2 = FUN_0060af10();
    *(int *)(iVar3 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    FUN_00457240(param_1);
    FUN_0041e8e0();
    uVar4 = FUN_005ae390(local_1c,s_Created__d_waypoints_from__d_ent_006a7650);
    local_4 = 0;
    FUN_005aff00(uVar4);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0();
    }
  }
  ExceptionList = local_c;
  return;
}

