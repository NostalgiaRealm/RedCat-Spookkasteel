/*
 * FUN_005994c0 at 005994c0
 * undefined FUN_005994c0(void)
 * Address ranges: 005994c0-00599536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005994c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  undefined4 local_4;
  
  iVar3 = -1;
  local_4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x34);
  local_8 = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(*puVar4);
      iVar2 = FUN_005995d0();
      if ((iVar2 != -1) && ((iVar3 == -1 || (iVar2 < iVar3)))) {
        local_4 = FUN_0059df90(*puVar4);
        iVar3 = iVar2;
      }
    }
    puVar4 = puVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return local_4;
}

