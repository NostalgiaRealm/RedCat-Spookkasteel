/*
 * FUN_005ccde0 at 005ccde0
 * undefined FUN_005ccde0(void)
 * Address ranges: 005ccde0-005ccf23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ccde0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < local_4) {
    do {
      iVar1 = FUN_005cc390();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = FUN_005cc730(param_1,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005cd390(4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = 0;
      if (0 < local_c) {
        do {
          iVar3 = FUN_005cc390();
          if (iVar3 == 0) {
            return 0;
          }
          iVar4 = FUN_005cd390(4);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cf3b0(param_2);
          *(int *)(iVar3 + 4) = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cd390(param_2);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cd390(4);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cf3b0(param_2);
          *(int *)(iVar3 + 8) = iVar4;
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_005cd390(param_2);
          if (iVar4 == 0) {
            return 0;
          }
          iVar3 = FUN_005cc310(iVar1,iVar3);
          if (iVar3 == 0) {
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_c);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_4);
  }
  return 1;
}

